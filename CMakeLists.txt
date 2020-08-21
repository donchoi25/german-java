cmake_minimum_required(VERSION 3.13.4)

project(german-java LANGUAGES CXX C)

#find packages
FIND_PACKAGE(BISON REQUIRED)
FIND_PACKAGE(FLEX REQUIRED)
FIND_PACKAGE(LLVM REQUIRED CONFIG)

message(STATUS "FOUND LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

#execute_process(
#	COMMAND ${CMAKE_CURRENT_SOURCE_DIR}/HeaderGen.sh
#)

add_custom_command(
	OUTPUT include/nodes.h
	COMMAND ${CMAKE_SOURCE_DIR}/HeaderGen.sh
	COMMENT "Creates Master Header File"
)

add_custom_command(
	OUTPUT parser.tab.c
	COMMAND ${BISON_EXECUTABLE} 
	ARGS	-d ${CMAKE_SOURCE_DIR}/parser.y
	DEPENDS parser.y
	COMMENT "Creates Parser Source File"
)

add_custom_command(
	OUTPUT lex.yy.c
	COMMAND ${FLEX_EXECUTABLE} 
	ARGS	${CMAKE_SOURCE_DIR}/lexer.l
	DEPENDS lexer.l
	COMMENT "Creates Lexer Source File"
)

# Find source and header files
file(GLOB SOURCES src/*.cpp)
file(GLOB HEADERS include/*.h)

# Include header files
include_directories(include)
include_directories(${LLVM_INCLUDE_DIRS})

add_definitions(${LLVM_DEFINITIONS})

set_source_files_properties(parser.tab.c lex.yy.c PROPERTIES LANGUAGE CXX)
add_executable(german-java ${SOURCES} include/nodes.h parser.tab.c lex.yy.c )

#Find the libararies that correspond to the LLVM components we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)

#Link against LLVM libararies
target_link_libraries(german-java ${llvm_libs})