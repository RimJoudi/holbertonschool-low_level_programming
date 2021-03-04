#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string.
 * @s2: string.
 * @n: Unsigned integer.
 * Return: string.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l;
	char *ptr;

	i = 0;
	j = 0;
	k = 0;
	l = 0;

	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		i++;
	}
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		j++;
	}
	if (n >= j)
		n = j;
	ptr = malloc(i + n + 1 * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		ptr[k] = s1[l];
		l++;
	}
	for (l = 0; l < n; l++)
	{
		ptr[k] = s2[l];
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
