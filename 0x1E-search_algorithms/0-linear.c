#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search -  searches for a value in an array of integers using the Linear search algorithm
 *@array: pointer to the first elem of the arr to search in
 *@size: nbre of elements in array 
 *@value: value to search for
 * Return: the index of value's location otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
  size_t index = 0;

  while ( index < size && array[index] != value)
    printf("Value checked array[%lu] = [%d]\n", index, array[index]);
    ++index;
  if (index == size)
    return -1;
  return index;
}
