#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 *@head: a pointer to the first element of the list.
 *Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *store;

	while (store != NULL)
	{
		store = head->next;
		free(head);
		head = store;
	}
}
