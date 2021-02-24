#include "holberton.h"
/**
 * _puts_recursion - prints a string, followed by a new line.
 *@s: char.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	_putchar(s[i]);
	_putchar('\n');
}
