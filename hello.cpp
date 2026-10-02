// Simple HelloWorld aplication in C++

#include <iostream>

int main() {
  std::cout << " Hello in C++ World (" << __cplusplus << ")!\n";
}

// Build & runing

// g++ -std=c++26 hello.cpp -o hello
// ./hello
//  Hello in C++ World (202400)!

// g++ -std=c++23 hello.cpp -o hello
// ./hello
//  Hello in C++ World (202302)!

// g++ -std=c++20 hello.cpp -o hello
// ./hello
//  Hello in C++ World (202002)!

// g++ -std=c++17 hello.cpp -o hello
// ./hello
//  Hello in C++ World (201703)!

// g++ -std=c++14 hello.cpp -o hello
// ./hello
//  Hello in C++ World (201402)!

// g++ -std=c++11 hello.cpp -o hello
// ./hello
//  Hello in C++ World (201103)!

// g++ -std=c++03 hello.cpp -o hello
// g++ -std=c++98 hello.cpp -o hello
// ./hello
//  Hello in C++ World (199711)!