#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 *@head: a pointer to the first element of the list.
 *Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevnode, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prevnode = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prevnode;
		prevnode = *head;
		*head = next;
	}
	*head = prevnode;
	return (*head);
}
