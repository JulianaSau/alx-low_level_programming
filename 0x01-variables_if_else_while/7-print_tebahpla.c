#include <stdio.h>

/**
 * main - prints out alphabet in lower case in reverse order
 *
 * Description: prints out alphabet in lower case in
 * reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);

	putchar('\n');

	return (0);
}
