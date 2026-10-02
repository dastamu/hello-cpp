# hello-cpp
Simple HelloWorld aplication in C++

## Dependences
### MINGW64
```sh
pacman -Syu
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```
### UCRT64
```sh
pacman -Syu
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```
### CLANG64
```sh
pacman -Syu
pacman -S --needed base-devel mingw-w64-clang-x86_64-toolchain
```
## Build
```sh
g++ -std=c++20 hello.cpp -o hello
```
## Runing
```
./hello
```