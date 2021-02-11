#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * @c : integer.
 * Return: either 0 or 1.
 */
int _isupper(int c)
{
if ((c >= 65) && (c <= 90))
{
return (1);
}
else
return (0);
}
