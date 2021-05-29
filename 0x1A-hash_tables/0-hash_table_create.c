#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: unsigned long int, size of the array
 * Return: a pointer to the newly created hash table,
 *		otherwise, NULL.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_tab;

	if (size == 0)
		return (NULL);
	h_tab = malloc(sizeof(hash_table_t));
	if (h_tab == NULL)
		return (NULL);
	h_tab->size = size;
	h_tab->array = malloc(sizeof(hash_node_t *) * size);
	if (h_tab->array == NULL)
	{
		free(h_tab);
		return (NULL);
	}
	return (h_tab);
}
