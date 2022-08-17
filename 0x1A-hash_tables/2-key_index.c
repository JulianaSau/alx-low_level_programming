#include "hash_tables.h"

/**
 * key_index - function to calculate the index  corresponding to a given key
 * @key: key of the node to calculate it's index
 * @size: size of the array
 * Return: the index at which the key/value pair should be stored in the array
 *	   of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);
	return (index);
}
