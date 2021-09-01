#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of int using Linear search
 *@array: pointer to the first elem of the arr to search in
 *@size: nbre of elements in array
 *@value: value to search for
 * Return: the index of value's location otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	for (i = 0; array[i] < array[size]; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
	}
	return (-1);
}
