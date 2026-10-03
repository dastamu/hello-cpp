#!/bin/bash

PATTS=("c++26" "c++23" "c++20" "c++17" "c++14" "c++11" "c++03" "c++98")
printf " Build"
for pat in "${PATTS[@]}"; do
  g++ -std=${pat} hello.cpp -o hello_${pat}
  printf "."
done
printf " done"
