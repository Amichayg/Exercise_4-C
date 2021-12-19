#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isCase(char string[], int upper) {
	for (int i = 0; i < strlen(string); i++) {
		if (isupper(string[i]) != upper) {
			return 0;
		}
	}
	return 1;
}
void classify_case(char* args[], int argcount) {
	int cases[2] = { 0,0 };
	for (int i = 0; i < argcount; i++) {
		cases[0] += isCase(args[i], 0);
		cases[1] += isCase(args[i], 1);
	}
}
int main(int argc, char* argv[]) {
	char* word = "Panda";
	printf("%d", isCase(word, 1));
	printf("%s", argv[1]);
}