#include "hash_tables.h"
/**
*hash_table_set - adds an element to the hash table.
*@ht: hash_table_t
*@key: const char
*@value: const char
* Return: 1 on success otherwise 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	else
		new->next = NULL;

	ht->array[index] = new;
	return (1);
}
