#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Decription: Prints alphabet in lowercase, followed by new line
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
}
