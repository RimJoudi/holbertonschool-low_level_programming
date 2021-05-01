#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 *@head: pointer to dlistint_t list.
 *@n: int.
 * Return: the address of the new element, otherwise, NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head)
{
(*head)->prev = new;
}
(*head) = new;
return (new);
}
