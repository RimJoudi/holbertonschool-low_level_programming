#include "holberton.h"
/**
 * _strcpy -  copies the string pointed.
 *@dest:char.
 *@src:char.
 *Return: the pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
		continue;
	}
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
