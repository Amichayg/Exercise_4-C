///@file 4_1.c
#include <stdio.h>
/**
* This function recives a string and prints the reverse version
* @param[in] str The string to be reversed
*/
void ReversedString(char* str) 
{
	for (int i = strlen(str) - 1; i >= 0; i--) 
	{
		printf("%c", str[i]);
	}
}
int main()
{
	char* string[20];
	printf("Enter 20 char string\n");
	scanf_s("%s", string,20);
	ReversedString(string);
}