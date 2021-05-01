#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 **@head: pointer to dlistint_t list.
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
dlistint_t *ptr;
while (head)
{
ptr = head;
head = head->next;
free(ptr);
}
}
