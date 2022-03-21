#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * to stdout
 *
 * @s: parameter that contains a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	/* assigning a pointer to string s*/
	int *rev_ptr = s;

	/*Getting length of the string s*/
	while (*(rev_ptr + 1) != '\0')
	{
		rev_ptr++;
	}

	while (rev+ptr > s)
	{
		char temp = *rev_ptr;
		*rev_ptr = *s;
		*s = temp;
	}

	_putchar ('\n');
}
