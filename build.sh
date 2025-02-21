#!/bin/bash
mkdir ./build -p
FILE_NAME=$(basename -s '.cpp' $1)
g++ -std=c++17 -Og -g -o  build/$FILE_NAME $1
