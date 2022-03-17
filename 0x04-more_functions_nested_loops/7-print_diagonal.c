#include "main.h"

/**
 * print_line - prints a diagonal line followed by a new line
 *
 * @n: param
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		_putchar(' ');

		for (i = 0; i < n ; i++)
		{
			_putchar('\');
			_putchar(' ');
		}
	}
	_putchar('\n');

}
