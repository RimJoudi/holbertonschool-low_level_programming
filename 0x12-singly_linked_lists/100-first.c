#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
void __attribute__((constructor)) f_print(void);

/**
 * f_print - prints a sentence before the main function is executed.
 *
 *Return: nothing.
 */

void f_print(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
