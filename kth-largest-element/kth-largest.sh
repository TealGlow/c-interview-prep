gcc -std=c99 -o kth-largest kth-largest.c
echo "1,2,3,4,5,6 2nd largest"
./kth-largest 1,2,3,4,5,6 2
echo "1,2,3,4,5 3rd largest"
./kth-largest 1,2,3,4,5 3
echo "7,9,8,7,4,1,6,9,1 4th largest"
./kth-largest 7,9,8,7,4,1,6,9,1 4
