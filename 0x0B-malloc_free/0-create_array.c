#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: unsigned int
 * @c: char
 *
 * Return: pointer to the array or NULl.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;
	
	if (size == 0)
		return (0);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (0);
	else
	{
		for (i = 0; i <= size; i++)
			p[i] = c;
	}
	return (p);
}
