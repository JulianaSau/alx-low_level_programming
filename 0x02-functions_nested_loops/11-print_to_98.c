#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from given n to 98, in order
 * separated by a comma, followed by a new line
 *
 * @n: parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n--);
		}

		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
		{
			printf("%d, ", n++);
		}
		printf("%d\n", n);
	}
}
