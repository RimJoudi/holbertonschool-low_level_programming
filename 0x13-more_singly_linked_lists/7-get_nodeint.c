#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *@head: a pointer to the first element of the list.
 *@index: unsigned int.
 *Return: the nth node of a list or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count <= index - 1 && head->next != NULL; count++)
	{
		head = head->next;
	}
	if (count <= index - 1)
		return (NULL);
	return (head);
}
