#!/bin/bash

# compile
gcc -std=c99 -o last-target last-target.c
echo "1123444444456 4"
./last-target 1123444444456 4

echo "1123444444456 5"
./last-target 1123444444456 5

echo "1123444444456 7"
./last-target 1123444444456 7

echo "1"
./last-target 1
