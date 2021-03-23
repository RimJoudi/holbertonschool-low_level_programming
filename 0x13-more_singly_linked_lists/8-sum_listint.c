#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 *@head: a pointer to the first element of the list.
 *Return: the sum of data in listint_t.
 */
int sum_listint(listint_t *head)
{
int i;
i = 0;
while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
