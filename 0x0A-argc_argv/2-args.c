#include "main.h"
#include <stdio.h>
/**
 * main - Prints all arguments it receives.
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);
	return (0);
}
