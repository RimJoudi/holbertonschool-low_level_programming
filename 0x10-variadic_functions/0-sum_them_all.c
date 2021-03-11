#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sums  all the parameters of a function.
 * @n: const unsigned int.
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int sump = 0, i;
va_list(ap);
va_start(ap, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
sump += va_arg(ap, int);
va_end(ap);
return (sump);
}
