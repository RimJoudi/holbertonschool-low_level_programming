#include "holberton.h"

/**
 * _isdigit - checks for digit.
 * @c : integer.
 * Return: either 0 or 1.
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
{
return (1);
}
else
{
return (0);
}
}
