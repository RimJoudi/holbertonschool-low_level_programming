#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 *@s: string.
 * Return: nothing.
 */
void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	j = i - 1;
	for (i = j; s[i] >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
