#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *@h: pointer to the first element of the list.
 *Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("0\n");
		else
			printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
