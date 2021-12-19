///@file 4_4.c
#include <stdio.h>
#include <string.h>
/**
* This function recives a non-formatted environment variable string, formats it, and prints it. 
* @param[in] envStr an environment string, supplied from envp
*/
void PrintEnv(char* envStr) {
    char* position; char* envVar; char* envVal; 
    envVar = strtok_s(envStr, "=", &position); /* we use strtok to get the first section of the envStr*/
    envVal = strtok_s(NULL, "=", &position); /* we use strtok to get the second section of the envStr*/
    printf("Environment variable \"%s\" has the value \"%s\"\n", envVar, envVal); 
}
/**
* We print the environment variables with formatting
*/
int main(int argc, char* argv[], char* envp[])
{
    while (*envp) {  /* we loop the envp list using the supplied pointer*/
        PrintEnv(*envp++); /* we print the value pointed to by envp at its current position*/
    }

}