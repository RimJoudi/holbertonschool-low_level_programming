#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 *main - main test
 *@ac: integer
 *@av: char
 *Return: Always 0.
 */

int main(int ac, char **av)
{

	char *buff;
	size_t size = 0;
		
	buff = malloc(sizeof(char) * size + 1);
	if (buff == NULL)
		return (0);

	for(; av[size] != av[ac]; size++)
	{
		printf("$ ");
		while (getline(&buff, &size, stdin) != EOF)
		{
			printf("$ %s\n", buff);
		}
	}

	free(buff);

	return (0);
}
