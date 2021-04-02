#include <stdio.h>
#include <unistd.h>
/**
 *main - AV
 *@ac: integer
 *@av: char
 *Return: Always 0.
 */

int main(int ac, char **av)
{
	int i = 0;
	
	for(; av[i] != av[ac]; i++)
		{
			printf("av[%d]: %s\n", i, av[i]);
			i++;
		}
	return (0);
}
