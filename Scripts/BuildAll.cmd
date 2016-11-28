pushd
cd ..\Build
cmake --build . --target INSTALL --config Debug
cmake --build . --target INSTALL --config Release
popd 
