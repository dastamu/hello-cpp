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
# full 1841,96 MiB
pacman -S --needed base-devel mingw-w64-clang-x86_64-toolchain
# minimal 896,99 MiB
pacman -S mingw-w64-clang-x86_64-gcc-compat
```
### EL 10
```sh
sudo dnf update
sudo dnf install g++
```
## Build & Running
```sh
./build.sh
```
## License
[License](LICENSE) MIT

## Author
**dastamu** - [Profil GitHub](https://github.com/dastamu)
