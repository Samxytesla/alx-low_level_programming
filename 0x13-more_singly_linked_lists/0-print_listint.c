#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements in the list
 * @h: A pointer to listint structure.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
