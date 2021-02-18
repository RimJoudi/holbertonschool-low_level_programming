#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: integer.
 * @n: integer.
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{

	int i;
	int j;

	i = 0;
	n = n - 1;
	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
