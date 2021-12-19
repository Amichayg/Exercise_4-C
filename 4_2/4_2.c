///@file 4_2.c
#include <stdio.h>
/**
prints section of string
@param[in] string
@param[in] start Index to start printing from
@param[in] end Index to stop printing at. 
*/
void PrintSubstring(char* string, int start, int end)
{
	for (int i = start; i < end; i++) 
	{
		printf("%c", string[i]);
	}
}
/**
* prints sentence reversed
* @param[in] sentence string to be reversed
*/
void ReversedSentence(char* sentence) 
{
	int end = strlen(sentence);
	for (int i = strlen(sentence)-1; i > 0; i--) 
	{
		if (sentence[i] == ' ')
		{
			PrintSubstring(sentence, i + 1, end);
			printf(" ");
			end = i;
		}
	}
	PrintSubstring(sentence, 0, end);
}
/**
* Recives sentence and reverses it. 
*/
int main() 
{
	char* sentence[40]; 
	printf("Enter 40 char sentence\n");
	gets(sentence);
	//scanf_s("%s", sentence, 40);
	ReversedSentence(sentence);
}