#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers from 0 - 9 using
 * putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);

	putchar('\n');

	return (0);
}