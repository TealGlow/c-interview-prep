/* Name: Alyssa Comstock
 * Date: 9/8/2022
 * Description: Function to get the kth highest number in a list
 * given in the args.  K is also given in the args.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int findLargest(int * list);
int * getArgs(char * list);


int main(int argc, char * argv[]){
	if(argc < 3 || argc > 3){
		printf("Invalid number of args!\n");
		exit(1);
	}
	
	int * arr = getArgs(argv[1]);	
	int kth = -1;

	for(int i=0; i<atoi(argv[2]); i++){
		kth = findLargest(arr);
	}

	printf("Kth largest: %d\n", kth);

	free(arr);
	return 0;
}



int findLargest(int * list){
	int max = -9999;
	int max_index = 0;
	int i = 0;

	while(list[i] != '\0'){
		if(list[i] >= max){
			// remove from list, return it
			max = list[i];
			max_index=i;
		}
		i++;
	}
	list[max_index] = -99999;

	return max;
}



int * getArgs(char * list){
	int * args_list = malloc(sizeof(int)*strlen(list));
	memset(args_list, '\0', strlen(list));
	
	char * token = strtok(list, ",");
	int i=0;

	while(token){
		args_list[i] = atoi(token);
		i++;
		token = strtok(NULL, ",");
	}

	return args_list;
}
