#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Decription: Prints alphabet in lowercase ten times, followed by new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
