#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 *main - main test
 *@ac: integer
 *@av: char
 *Return: Always 0.
 */

int main(int ac, char **av)
{
	int i;
	char *token;
	char str[50] = "Hello Rym";

	for(i = 0; av[i] != av[ac]; i++)
	{
		token = strtok(str, " ");	//extracting the 1st token
		while (token != NULL)		//loop through str to get the other tokens
		{
			printf("%s\n", token);	//print each token
			token = strtok(NULL, " ");
		}
	}	

	return (0);
}
