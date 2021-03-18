#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *@h: a pointer.
 *Return: number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t len;
	size_t x = 0;

	len = 0;
	while (h != NULL)
	{
		x = len + x;
		len++;
		h = h->next;
	}
	return (len);
}
