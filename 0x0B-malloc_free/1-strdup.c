#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: char
 * Return: pointer to the duplicated string or NULL.
 */
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *s;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	s = malloc(size * sizeof(char));
	if (s == NULL)
	return (0);
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			s[i] = str[i];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
}
