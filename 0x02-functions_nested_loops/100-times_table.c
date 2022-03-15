#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * if n > 15 then print nothing
 *
 * @num: number of the times table
 *
 * Return: void
 */

void print_times_table(int num)
{
	int x, y, product;

	if (num >= 0 && num <= 15)
	{
		for (x = 0; x <= num; x++)
		{
			for (y = 0; y <= num; y++)
			{
				product = y * x;
				if (y == 0)
				{
					_putchar(product + '0');
				} else if (product < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				} else if (product >= 10 && product < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				} else if (product >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 100) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
