#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index of a
 *             dlistint_t linked list.
 *@head: a pointer to a poiter to dlistint_t list.
 *@index: unsigned int.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *ptr, *store_next, *store_prev;
ptr = *head;
if (*head == NULL && ptr == NULL)
return (-1);
while (*head && ptr)
{
if (index == 0)
*head = ptr->next;
return (1);
if (index == i)
{
store_next = ptr->next;
store_prev = ptr->prev;
store_next->prev = store_prev;
store_prev->next = store_next;
}
else
{store_prev->next = NULL;
}
free(ptr);
return (1);
}
ptr = ptr->next;
i++;
return (1);
}
