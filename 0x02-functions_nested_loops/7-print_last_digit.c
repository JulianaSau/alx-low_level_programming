#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @num: a parameter
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int num)
{
	int last_digit;

	/* Checks whether the number is less than 0 */
	if (num < 0)
		num = -num;

	last_digit = num % 10;

	/*If the last digit is less than 0, last_digit= -last_digit*/
	if (last_digit < 0)
		last_digit *= (-1);

	_putchar(last_digit + '0');

	return (last_digit);
}
