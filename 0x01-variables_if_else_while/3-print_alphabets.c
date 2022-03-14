#include <stdio.h>

/**
 * main - prints the alphabet in both lower and upper case,
 *  followed by a new line
 * Return: 0 completion of program
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
