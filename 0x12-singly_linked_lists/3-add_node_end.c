#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - gives the length of a string
 * @s: string
 * Return: the lengthof a string.
 */

int _strlen(const char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		continue;
	return (l);
}

/**
 * add_node_end- adds a new node at the end of a list_t list.
 *@head: the head of the linked list.
 *@str: a pointer.
 *Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
	return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new;
	return (new);
}
