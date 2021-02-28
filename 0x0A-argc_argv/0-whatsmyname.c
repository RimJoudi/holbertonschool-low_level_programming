#include <stdio.h>
/**
 * main -  prints the program's name.
 * @argc: integer
 * @argv: string
 * Return: integer
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
