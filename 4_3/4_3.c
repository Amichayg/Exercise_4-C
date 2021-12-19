///@file 4_3.c
#include <stdio.h>

/**
* checks if string is completely uppercase ,or completely lowercase. 
* @param[in] string the string to evaluate
* @param[in] upper the value to check against - if 1 uppercase, if 0 lowercase. 
* @param[out] isCase wether the string is entirely upper/lower.
*/
int IsCase(char* string, int upper) 
{
	for (int i = 0; i < strlen(string); i++) 
	{
		if (isupper(string[i]) != upper) 
		{
			return 0;
		}
	}
	return 1;
}
/**
* a function that classifies arg cases by lowercase uppercase and no specific case and prints result
* @param[in] args
* @param[in] argCount
*/
void ClassifyArgCase(char* args[], int argCount) 
{
	int cases[2] = { 0,0 };
	for (int i = 1; i < argCount; i++)
	{
		cases[0] += IsCase(args[i], 0); /* counts lowercase*/
		cases[1] += IsCase(args[i], 1); /* counts uppercase*/
	}
	int noCase = argCount - cases[0] - cases[1]; /* calculates noCase, args that are neither upper nor lower case*/
	printf("Lowercase:%d Upercase:%d NoCase:%d\n", cases[0],cases[1],noCase);
}
/**
* This program prints the cmdline arguments, their count, and the count of uppercase/lowercase/nocase arguments. 
*/
int main(int argc, char* argv[]) 
{
	for (int i = 1; i < argc; i++) 
	{
		printf("%s\n", argv[i]);
	}

	printf("Argument Count:%d\n", argc-1);
	ClassifyArgCase(argv, argc);
}