#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: integer
 * @height: integer
 * Return: pointer or NULL.
 */
int **alloc_grid(int width, int height)
{
int i, j, k;
int **p;
if ((width <= 0) || (height <= 0))
return (NULL);
p = malloc(height * sizeof(int *));
if (p == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (k = 0; k < i; k++)
free(p[i]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
{
p[i][j] = 0;
}
}
return (p);
}
