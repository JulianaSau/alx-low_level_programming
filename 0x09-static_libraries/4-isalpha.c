#include "main.h"

/**
 * _isalpha - checks wheher given character is an alphabet
 *
 * @c: an argument
 *
 * Return: 1 if c is alphabet, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
