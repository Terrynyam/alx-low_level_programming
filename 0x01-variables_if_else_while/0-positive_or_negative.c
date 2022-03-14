#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - assigns a random number to a variable n and print whether the number
 * stored is negative or positive
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
