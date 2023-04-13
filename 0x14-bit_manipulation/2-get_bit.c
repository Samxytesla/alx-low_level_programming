#include "main.h"

/**
 * get_bit - A function that gets a bit at index.
 * @n: The number to get bit from.
 * @index: The index where the bit get at.
 * Return: The value of the bit or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1;
	int bit = 0;

	if (index < 64)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (bit);
	}

	num <<= index;

	if (num & n)
	{
		bit = 1;
	}
	return (bit);
}
