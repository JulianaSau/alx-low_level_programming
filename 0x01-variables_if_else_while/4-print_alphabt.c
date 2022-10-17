#include <stdio.h>

/**
 * main - prints out alphabet in lower case other than q and e
 *
 * Description: prints out alphabet in lower case other
 * than q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);

	putchar('\n');

	return (0);
}
