#include <stdio.h>

/**
 * main - prints out alphabet in lower case and upper case
 *
 * Description: prints out alphabet in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		putchar(alphabet);

	for (alphabet = 'A'; alphabet<= 'Z'; alphabet++)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
