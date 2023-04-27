#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list to print
 *
 * Return: The number of nodes in printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	for (; h; nodes++, h = h->next)
		printf("[%d] %s\n", h->len, h->str ? h->str : "(nil)");

	return (nodes);
}
