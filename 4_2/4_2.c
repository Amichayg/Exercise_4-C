///@file 4_2.c
#include <stdio.h>
/**
prints section of string
@param[in] string
@param[in] start
@param[in] end
*/
void PrintSubstring(char* string, int start, int end)
{
	for (int i = start; i < end; i++) 
	{
		printf("%c", string[i]);
	}
}
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
int main() 
{
	char* sentence[40]; 
	printf("Enter 40 char sentence\n");
	gets(sentence);
	//scanf_s("%s", sentence, 40);
	ReversedSentence(sentence);
}