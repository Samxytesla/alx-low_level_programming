#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main -main entry.
 * @argc:number of command line arguments
 * @argv: array containing the program
 * Description:program print minimum number of coins
 * Return: 1 otherwise 0
 */
int main(int argc, char **argv)
{
	int n, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		if (n < 0)
		{
			printf("0\n");
		}
		else
		{
			for (change = 0; n != 0; change++)
			{
				if (n - 25 >= 0)
					n -= 25;
				else if (n - 10 >= 0)
					n -= 10;
				else if (n - 5 >= 0)
					n -= 5;
				else if (n - 2 >= 0)
					n -= 2;
				else if (n - 1 >= 0)
					n -= 1;
			}
			printf("%d\n", change);
		}
	}
	return (0);
}
