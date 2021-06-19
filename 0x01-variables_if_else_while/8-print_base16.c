#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase,
 *  followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
