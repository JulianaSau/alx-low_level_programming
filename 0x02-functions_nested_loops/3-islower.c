#include "main.h"

/**
 * _islower - checks whether given characetr is lowercase
 *
 * @c: an argument
 *
 * Return: 1 if character c is lowercase,
 *       : 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
