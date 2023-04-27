#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list_t list.
 * @head: A pointer to the list_t list.
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
{
	tmp = head;
	head = head->next;
	if (tmp->str != NULL)
	{
		free(tmp->str);
	}
	free(tmp);
}
}
