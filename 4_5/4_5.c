///@file 4_5.c
#include <stdio.h>

/**
	* function that recieves a,b and returns the smaller, or minimum, value.
	* @param[in] a
	* @param[in] b
	* @param[out] minimum
	*/
int min(int a, int b) {
	
	if (a > b) {
		return b;
	}
	return a;
}
/**
* checks if the smaller string is contained within the start of the larger string.
* Example: "ch" is contained in beginning of "char", chair is not contained in charlatan.
* @param[in] str1 
* @param[in] str2
* @param[out] isContained Value indicating wether the short string is contained in  start oflarger string
*/
int stringInStartOfString(char* str1, char* str2) {
	int len = min(strlen(str1), strlen(str2));  /*length of shortest string to use in loop*/
	for (int i = 0; i < len; i++) {
		if (str1[i] != str2[i]) { /* comparison*/
			return 0;
		}
	}
	return 1;
}
/**
* This program recieves a search query and prints matching environment variables starting with search string.
*/
int main(int argc, char* argv[], char* envp[])
{
	char* search[20];
	printf("Enter 20 char search query\n"); /*search query input*/
	scanf_s("%s", search, 20); 

	while (*envp) {
		if (stringInStartOfString(search, *envp) ){ /* Checking if search string is in start of env variable*/
			printf("%s\n",*envp);
		}
		envp++;
	}

}