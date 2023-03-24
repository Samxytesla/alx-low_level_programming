#include "function_pointers.h"
#include <stdlib.h>

/**
 * print name - A function that prints a name
 * @name: string to add
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
