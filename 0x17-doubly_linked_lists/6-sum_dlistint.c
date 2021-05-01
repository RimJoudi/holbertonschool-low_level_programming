#include "lists.h"
/**
 *sum_dlistint - returns the sum of all the data (n)
 *                  of a dlistint_t linked list.
 *@head: pointer to dlistint_t list.
 * Return: the sum of all the data (n), otherwise, NULL.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
