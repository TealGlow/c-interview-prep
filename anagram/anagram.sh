#!/bin/bash

# Bash script to compile anagram.c and
# test some inputs

gcc -std=c99 -o anagram anagram.c
echo "Testing strings that are anagrams ====================================="
echo "danger and garden:"
./anagram danger garden
echo "end and den:"
./anagram end den

echo "Testing strings that are not anagrams ================================"
echo "aaaaa bbbbb:"
./anagram aaaaaa bbbbbb

echo "dangee garden"
./anagram dangee garden

echo "Testing bad inputs====================================================="
echo "no inputs:"
./anagram
echo "one input:"
./anagram end
echo "too many args:"
./anagram end den ned

