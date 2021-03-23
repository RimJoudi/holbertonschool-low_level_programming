#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *@head: a pointer to pointer.
 *@n: int.
 *Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
tmp = *head;
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = new;
return (new);
}
