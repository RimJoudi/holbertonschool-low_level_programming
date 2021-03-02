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
	unsigned int i, size;
	char *s;

	if (str == NULL)
	{
		return (0);
	}
	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	s = malloc(sizeof(char) * size + 1);
	if (s == NULL)
	{
		return (0);
	}
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
