#include "main.h"
#include <stdio.h>
/**
 * main -main entry.
 * @argc:number of command line arguments
 * @argv: array containing the program command line arguments
 * Description:program that prints its name.
 * Return:integer
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
