#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array element on a new
 * @array: array
 * @size: how many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0 ; i < size ; i++)
	{
		action(array[i]);
	}
}

