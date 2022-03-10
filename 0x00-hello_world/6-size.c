#include <stdio.h>

/**
 * main - prints the size of various types
 *
 * Description: prints the size of various types on a computer it is compiled and run on
 *
 * Return: 0 if successful, something else when an error occurs
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", (int) sizeof(char));
	printf("Size of an int: %d byte(s)\n", (int) sizeof(int));        printf("Size of a long int: %d byte(s)\n", (int) sizeof(long int));
	printf("Size if a long long int: %d byte(s)\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", (int) sizeof(float));

	return (0);
}
