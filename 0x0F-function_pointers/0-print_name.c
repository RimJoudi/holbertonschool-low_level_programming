#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: char
 * @f: pointer to a function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
