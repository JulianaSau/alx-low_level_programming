#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: number of bytes in memory to allocate
 *
 * Return: pointer to allocated memory(Success), 98 on failure
 */

void *malloc_ckecked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	/*Check if malloc failed*/
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
