#include "holberton.h"

/**
 * _strncat -  concatenates two strings.
 *@dest: string.
 *@src: string.
 *@n: integer.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
