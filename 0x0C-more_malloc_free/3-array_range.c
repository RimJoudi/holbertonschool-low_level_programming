
#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - range an array
 *@max:integer
 *@min:integer
 *Return: integer pointer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;

	j = 0;
	if (min > max)
		return (NULL);
	ptr = malloc(((max - min) + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}
	return (ptr);
}
