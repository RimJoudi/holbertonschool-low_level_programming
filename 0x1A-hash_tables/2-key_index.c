#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash, index;
hash = hash_djb2(key);
index = hash % size;
return (index);
}
