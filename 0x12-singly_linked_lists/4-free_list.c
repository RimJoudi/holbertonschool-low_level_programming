#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list.
 *@head: pointer.
 *Return: nothing.
 */

void free_list(list_t *head)
{
list_t *store;
while (head != NULL)
{
store = head->next;
free(head);
free(head->str);
head = store;
}
}
