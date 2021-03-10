#include "function_pointers.h"
#include <stdio.h>
#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: int
 * @size: int
 * @cmp: pointer to a function
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, k;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
k = cmp(array[i]);
if (k == 1)
return (i);
}
return (-1);
}
