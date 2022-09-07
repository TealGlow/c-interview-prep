/* Name: Alyssa Comstock
 * Purpose: Coding Interview Prep
 * Date: 9/7/2022
 * Description: Program that gets to strings from the command
 * line and determines if these strings are anagrams of each other.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototype
int isAnagram(char str1[], char str2[]);



/* Main
 * args: argc - count of how many args are passed in from the cmd line
 *       argv - list of args passed in, in this case its the strings we are checking
 *
 * function handles output from isAnagram check function.
 */
int main(int argc, char* argv[]){
	// get strings from argv
	// checks before anagram check: 
	if(argc < 3){
		fprintf(stdout, "Too few args\n");
		exit(1);
	}
	else if(argc > 3){
		fprintf(stdout, "Too many args\n");
		exit(1);
	}
	else if(strlen(argv[1]) != strlen(argv[2])) {
		fprintf(stdout, "args not the same size, they are not an anagram\n");
		exit(1);
	}

	// anagram check:
	if(isAnagram(argv[1], argv[2]) == 1){
		// is
		fprintf(stdout, "These are anagrams!\n");
		exit(0);
	}else{
		fprintf(stdout, "Not anagrams!\n");
		exit(1);
	}
}



/* isAnagram
 *
 * args: str1 - first string to check
 *       str2 - second string to check
 *
 * Functon creates hash tables of the frequency of each letters in
 * str1 and str2.  If these hash tables are not the same, then they are
 * not anagrams.
 *
 * Returns 1 (true) if they are anagrams, 0 (false) otherwise.
 * */
int isAnagram(char str1[], char str2[]){
	// create the hashTable
	int * hashTableStr1 = malloc(strlen(str1)+1);
	// init all vals to 0
	memset(hashTableStr1, 0, strlen(str1)+1);
	// create the hashTable
	int * hashTableStr2 = malloc(strlen(str2)+1);
	// init all vals to 0
	memset(hashTableStr2, 0, strlen(str2)+1);

	for(int i=0; i<strlen(str1); i++){
		hashTableStr1[str1[i]%(strlen(str1))]++;
		hashTableStr2[str2[i]%(strlen(str2))]++;
	}

	for(int j=0; j<strlen(str1); j++){
		if(hashTableStr1[j] != hashTableStr2[j]){
			free(hashTableStr1);
			free(hashTableStr2);
			return 0; // false
		}

	}


	free(hashTableStr1);
	free(hashTableStr2);
	return 1;	
}
