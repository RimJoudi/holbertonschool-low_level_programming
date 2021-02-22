#include "holberton.h"
/**
*_strspn - gets the length of a prefix substring.
* @accept:char
* @s:char
* Return:number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	i = 0;
	j = 0;
	while (s[j] != '\0' && s[j] != ' ')
	{
		n = 0;
		while (accept[n] != '\0')
		{
			if (accept[n] == s[j])
			{
				i += 1;
			}
			n++;
		}
	j++;
	}
	return (i);
}
