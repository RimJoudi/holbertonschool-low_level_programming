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
	unsigned int i, j, l1, l2;
	char *p;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		for (l1 = 0; s1[l1] != '\0'; l1++)
			continue;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		for (l2 = 0; s2[l2] != '\0'; l2++)
			continue;
	}
	p = malloc(sizeof(char) * (l1 + l2 + 1));
	if (p == NULL)
		return (0);
	for (i = 0; i < l1; i++)
		p[i] = s1[i];
	for (j = 0; j < l2; j++)
		p[l1 + j] = s2[j];
	p[l1 + l2] = '\0';
	return (p);
}
