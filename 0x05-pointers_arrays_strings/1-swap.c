#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to a variable a
 * @b: pointer to a variable b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
