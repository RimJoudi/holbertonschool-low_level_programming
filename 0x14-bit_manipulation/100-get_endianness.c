#include <stdio.h>
#include "holberton.h"

/**
 * get_endianness - converts a binary number to an unsigned int.
 *
 * Returns: 0 if big endian otherwise 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
