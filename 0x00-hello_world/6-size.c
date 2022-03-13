#include <stdio.h>

/**
 * main - it prints the size of various types on the computer,
 * it is compiled and run on
 * Return: 0 if it exited properly, otherwise a none-zero value
 */
int main(void)
{
	printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of an integer: %d byte(s)\n", sizeof(int));
	printf("size of a long integer: %d byte(s)\n", sizeof(long int));
	printf("size of a float : %d bytes\n", sizeof(float));
	return (0);
}
