#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){
	// given a sorted arr argv[1] and a target argv[2]
	// find the index of the first and last position of the target in arr
	// if the target cant be found return [-1, -1]
	
	// initial checks:
	if(argc < 3 || argc > 3){
		fprintf(stdout, "Invalid number of args\n");
		exit(1);
	}

	int pos1 = -1;
	int pos2 = -1;

	// O(n)
	for(int i=0; i < strlen(argv[1]); i++){
		if(argv[1][i] == argv[2][0]){
			if(pos1 == -1){
				pos1 = i;
				pos2 = i;
			}else{
				pos2 = i;
			}
		}
	}

	fprintf(stdout, "[%d, %d]\n", pos1, pos2);
	exit(0);
}
