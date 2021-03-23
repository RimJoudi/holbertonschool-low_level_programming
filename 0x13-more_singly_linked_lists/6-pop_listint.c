#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 *
 *@head: a pointer to the first element of the list.
 *Return: head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *tmp;
int n;
if (*head == NULL)
return (0);
while (*head != NULL)
{
tmp = *head;
*head = (*head)->next;
n = tmp->n;
free(tmp);
}
return (n);
}
