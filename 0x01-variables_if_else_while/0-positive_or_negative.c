#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - evaluates whether a value n is positive or negative
 *
 * Description: program allocates a random number to the
 * value n and evaluates whether it is positive or negative
 *
 * Return: Always 0 (success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Code goes here*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
