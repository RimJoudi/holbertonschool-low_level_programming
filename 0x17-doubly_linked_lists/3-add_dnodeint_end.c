#include "lists.h"
/**
 * main - check the code for Holberton School students.
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 **@head: pointer to dlistint_t list.
 *@n: int.
 * Return: the address of the new element, otherwise, NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *ptr;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
if (*head == NULL)
{
(*head) = new;
new->next = NULL;
new->prev = NULL;
new->n = n;
return (new);
}
ptr = (*head);
while (ptr->next)
{
ptr = ptr->next;
}
new->n = n;
new->next = NULL;
new->prev = ptr;
ptr->next = new;
return (new);
}
