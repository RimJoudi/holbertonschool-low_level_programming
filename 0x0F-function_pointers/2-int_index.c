#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: int
 * @size: int
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if ((cmp != NULL) || (size <= 0))
return (-1);
for (i = 0; i < size; i++)
cmp(array[i]);
return (i);
}
