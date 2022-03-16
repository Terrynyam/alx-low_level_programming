#include <unistd.h>

/**
 * _putchar - write the character c to std out
 * @c: character to print
 * Return: 1 on success ele -1
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
