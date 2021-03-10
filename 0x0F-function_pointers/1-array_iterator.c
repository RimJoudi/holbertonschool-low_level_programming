#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array.
 * @array: int
 * @action: int
 * @size: size_t
 * @f: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
