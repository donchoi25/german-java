#include "ErrorMsg.h"
#include <iostream>

ErrorMsg::ErrorMsg(std::string aafilename) : 
anyErrors(false),
filename(aafilename)
{}

void ErrorMsg::error(int row, int col, std::string msg){
    std::cerr<<filename + "::" + lineAndChar(row, col) + ": " + msg + "\n";
    anyErrors = true;  
}

void ErrorMsg::warning(int row, int col, std::string msg){
    std::cerr<<filename + "::" + lineAndChar(row, col) + "(warning): " + msg + "\n";
}

void ErrorMsg::info(std::string s){
    std::cerr<<s + "\n";
}

std::string ErrorMsg::lineAndChar(int row, int col){
    return std::to_string(row) + "." + std::to_string(col);
}