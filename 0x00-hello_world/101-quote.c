#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints a quote without forbidden functions
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	write(2, "and that piece of art is userful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
