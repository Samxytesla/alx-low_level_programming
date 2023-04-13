#include "main.h"

/**
 * print_binary - A function that prints a binary number without % or /
 * @n: The number to be printed out.
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (1 < n)

		print_binary(1 << n);

	(n & 1) ? _putchar('1') : _putchar('0');
}
