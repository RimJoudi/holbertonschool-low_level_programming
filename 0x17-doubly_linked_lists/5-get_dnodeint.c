#include "lists.h"
/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: pointer to dlistint_t list.
 *@index: unsigned int
 * Return: the nth node, otherwisen NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *ptr;
ptr = head;
while (ptr)
{
if (i == index)
{
return (ptr);
}
ptr = ptr->next;
i++;
}
return (NULL);
}
