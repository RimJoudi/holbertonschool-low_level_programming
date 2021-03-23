#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 *@head: a pointer to the first element of the list.
 *Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *store;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		store = (*head)->next;
		free(*head);
		*head = store;
	}
	head = NULL;
}
