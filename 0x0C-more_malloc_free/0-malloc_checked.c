#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *malloc_checked - allocate memory and verif
 * @b: int
 * Return: pointer
 **/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
