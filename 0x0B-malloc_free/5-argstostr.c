#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates arguments of a program.
 * @ac: integer
 * @av: integer
 * Return: char
 */
char *argstostr(int ac, char **av)
{
int i, j, x = 0, l = 0;
char *p;
if ((ac == 0) || (av == NULL))
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
l++;
}
p = malloc(sizeof(char) * (ac + l + 1));
if (p == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
p[x] = av[i][j];
x++;
}
p[x++] = '\n';
}
p[x] = '\0';
return (p);
}
