#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 *
 * @d: pointer to a variable d of type struct dog
 *
 * Return: if elem of d is NULL print (nil)
 * if d is NULL, print nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if(d->name = NULL)
			printf("(nill)\n");
		else
			printf("Name: %p\n",d->name);
	}
}
