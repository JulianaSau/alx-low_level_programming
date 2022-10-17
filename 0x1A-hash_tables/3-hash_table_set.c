#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: Upon failure - 0.
 *         Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *val;
	hash_node_t *node;
	unsigned long int index;
	hash_node_t *tmp;

	val = strdup(value);
	if (val == NULL)
		return (0);
	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = val;
			return (1);
		}
		tmp = tmp->next;
	}

	/* add node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = val;
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
