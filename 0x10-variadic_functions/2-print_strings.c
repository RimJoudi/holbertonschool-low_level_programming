#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: const char
 * @n:const unsigned int
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
char *s = 0;
va_list(ap);
va_start(ap, n);
if (n == 0)
return;
for (i = 0; i < n; i++)
{
s = va_arg(ap, char *);
if (s == NULL)
printf("nil");
else
printf("%s", s);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}
printf("\n");
va_end(ap);
}
