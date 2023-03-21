#include <stdio.h>

/**
 * main - program that prints the name of the file it was compiled from
 *
 * Return: always o
 */

int main(void)
{
	printf("Name of source file: %s\n", __FILE__);

	return (0);
}

