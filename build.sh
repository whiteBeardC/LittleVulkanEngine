mkdir -p build
cd build/
rm -rf *
cmake -S .. -B .
make -j8