#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - prints a listint_t linked list.
 *@head: a pointer to a pointer to the first element of the list.
 *@idx: unsigned int.
 *@n: integer.
 *Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *current, *new;
if (head == NULL)
return (NULL);
if (idx != 0)
{
current = *head;
for (i = 0; i < idx - 1 && current; i++)
{
current = current->next;
}
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = current->next;
current->next = new;
return (new);
}
