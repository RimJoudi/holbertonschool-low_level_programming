#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - main test
 *
 *Return: Always 0.
 */

int main(void)
{
	char *token;
	char str[50] = "Hello Rym";

	token = strtok(str, " ");	//extracting the 1st token
	while (token != NULL)		//loop through str to get the other tokens
	{
		printf("%s\n", token);	//print each token
		token = strtok(NULL, " ");	//passes to the next token
	}

	return (0);
}
