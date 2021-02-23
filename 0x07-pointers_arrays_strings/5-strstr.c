#include "holberton.h"
/**
*_strstr - finds the first occurrence of a substring in a string
* @haystack:char
* @needle:char
* Return:a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			return (&haystack[i]);
			break;
		}
	i++;
	j++;
	}
	return (0);
}
