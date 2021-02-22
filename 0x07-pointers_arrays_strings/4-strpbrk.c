#include "holberton.h"
/**
 *_strpbrk - searches a string for a set of bytes.
 * @s:char
 * @accept:char
 * Return:a pointer or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[i+1])
		return (&s[i]);
	}
	return (0);
}
