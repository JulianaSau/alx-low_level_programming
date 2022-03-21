#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * to stdout
 *
 * @str - parameter that contains a string
 *
 * Return: void
 */

void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
	{
		_putchar(*str + i);
		i++;
	}
}
