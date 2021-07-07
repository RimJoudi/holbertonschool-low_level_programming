#include "holberton.h"
/**
 * _sqrt_func - calculates the square root of a number
 * @num: integer
 * @i: integer
 * Return: integer
 */
int _sqrt_func(int num, int i)
{
    if (num < 0)
        return -1;
    if (i > num)
        return -1;
    if (i * i == num)
        return i;
    return(_sqrt_func(num, i + 1));
}

/**
 *_pow_recursion - returns the natural square root of a number.
 *@n: integer.
 * Return: integer.
 */
int _sqrt_recursion(int n)
{   
    return _sqrt_func(n, 1);
}
