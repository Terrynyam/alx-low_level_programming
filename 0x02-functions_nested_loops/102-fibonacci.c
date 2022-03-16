#include <stdio.h>

/**
 * main - print the 1st 50 fibonacci numbers starting with
 * 1 and 2 followed by a new line
 * Return: 0 success
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; i++)
	{
		if (j != 2036501107)
		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	return (0);
}
