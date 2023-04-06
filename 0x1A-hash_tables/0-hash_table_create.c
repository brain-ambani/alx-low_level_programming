#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the hash table
 *
 * Return: hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tbl;
	hash_node_t **arr;
	unsigned long int n;

	tbl = malloc(sizeof(hash_table_t));
	if (tbl == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		arr[n] = NULL;

	tbl->array = arr;
	tbl->size = size;

	return (tbl);
}
