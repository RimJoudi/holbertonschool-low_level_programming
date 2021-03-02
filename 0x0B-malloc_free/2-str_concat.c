#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: char
 * @s2: char
 * Return: pointer or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *p;

	if (s1 == NULL)
	i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
		continue;
	}
	if (s2 == NULL)
	j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
		continue;
	}
p = malloc(sizeof(char) * i + j + 1);
if (p == NULL)
return (NULL);
for (k = 0; k < i; k++)
p[k] = s1[k];
for (k = 0; k < j; k++)
p[k + i] = s2[k];
p[k + j] = '\0';
return (p);
}
