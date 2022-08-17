#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hashtable to lookup
 * @key: the key to search
 * Return:  on success - the value
 *	     otherwise - NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}


	return (NULL);
}
