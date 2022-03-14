#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse order
 * followed by a new line
 * Return:0 always success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
