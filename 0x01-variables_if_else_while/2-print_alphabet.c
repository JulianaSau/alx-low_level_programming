#include <stdio.h>

/**
 * main - prints out alphabet in lower case
 *
 * Description: prints out alphabet in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
