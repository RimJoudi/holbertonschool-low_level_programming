#include "holberton.h"
/**
 * rev_string - reverses a string.
 *@s:string.
 *Return: nothing.
 */
void rev_string(char *s)
{
	char c;
	int i, n;

	for (i = 0; s[i + 1] != '\0'; i++)
	{
		continue;
	}
	n = i;
	i = 0;
	while (i < n / 2 + 1)
	{
		c = s[i];
		s[i] = s[n - i];
		s[n - i] = c;
		i++;
	}
}
