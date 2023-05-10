mkdir build
cd build
echo "[*] Setting up the library"
cmake ..
echo "[*] Compiling the library"
make
cp libstr_extr.a ..
echo "[*] Done! The library is located in this directory"