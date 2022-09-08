/* Name: Alyssa Comstock
 * Date: 9/7/2022
 * Description: Get the first and last index of the target in
 * a sorted list.  Binary Search version.
 * */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int binarySearchFirst(char * list, int target);
int binarySearchLast(char * list, int target);


int main(int argc, char* argv[]){
	if(argc > 3 || argc < 3){
		fprintf(stderr, "Invalid number of args\n");
		exit(1);
	}

	int pos1 = binarySearchFirst(argv[1], argv[2][0]);
	int pos2 = binarySearchLast(argv[1], argv[2][0]);

	printf("[%d, %d]\n", pos1, pos2);
	return 0;
}



/* binarySearchFirst
 * Get the index of the first time the target appears in the list
 *
 * returns index
 *
 * Citation: References and adapted from
 * Url: https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/
 * Date: 9/7/2022
 * */
int binarySearchFirst(char * list, int target){
	int low = 0;
	int high = strlen(list)-1;
	int pos = -1;

	while(low <= high){
		int mid = (low + high)/2;
		if(list[mid] >= target){
			if(list[mid] == target){
				pos = mid;
			}
			high = mid - 1;
		}else if(list[mid] < target){
			low = mid + 1;
		}	
	}

	return pos;
}



/* binarySearchLast
 * Get the index of the last time the target appears in the list
 *
 * returns index
 *
 * Citation: References and adapted from
 * Url: https://www.geeksforgeeks.org/find-first-and-last-positions-of-an-element-in-a-sorted-array/
 * Date: 9/7/2022
 * */
int binarySearchLast(char * list, int target){
	int low = 0;
	int high = strlen(list)-1;
	int pos = -1;

	while(low <= high){
		int mid = (low + high)/2;
		if(list[mid] > target){
			high = mid - 1;
		}else if(list[mid] <= target){
			if(list[mid] == target){
				pos = mid;
			}
			low = mid + 1;
		}	
	}

	return pos;

}
