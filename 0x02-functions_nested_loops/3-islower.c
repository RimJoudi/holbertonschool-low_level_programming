#include "holberton.h"
/**
 * _islower -  checks for lowercase character.
 * @c: The charhacter to print.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
return (1);
}
else
{
return (0);
}
}
