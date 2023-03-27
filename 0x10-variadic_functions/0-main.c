#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum1;
	int sum2;

	sum1 = sum_them_all(2, 98, 1024);
	printf("%d\n", sum1);
	sum2 = sum_them_all(4, 98, 1024, 402, -1024);
	printf("%d\n", sum2);
	return (0);
}
