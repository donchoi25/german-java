HEADER=$(pwd)/../include/nodes.h
echo "#ifndef __NODES__" > $HEADER
echo "#define __NODES__" >> $HEADER
for file in $(pwd)/../include/*.h
do
    if [ "$file" != "$HEADER" ]; then
        echo "#include \"$(basename $file)\"" >> $HEADER
    fi
done
echo "#endif" >> $HEADER