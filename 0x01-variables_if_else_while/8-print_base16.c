#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all base 16 numbers using
 * putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	char alphabet;

	for (n = 48; n < 58; n++)
		putchar(n);

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
