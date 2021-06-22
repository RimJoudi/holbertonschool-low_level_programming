#include "holberton.h"
/**
 *print_last_digit - prints the last digit of a number.
	*@n: integer
	*
	*Return: last digit
	*/
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	{
		i = (n % 10) * (-1);
		_putchar(i + '0');
		return (i);
	}
	else
	{
		i = n % 10;
		_putchar(i + '0');
		return (i);
	}
}
