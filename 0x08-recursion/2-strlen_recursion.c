#include "holberton.h"

/**
 *_strlen_recursion - returns the length of a string.
 *@s: char.
 * Return: integer.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		return (_strlen_recursion(s + 1) + 1);
}
