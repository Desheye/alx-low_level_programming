#include <stdio.h>
#include "../search_algos.h"

/**
 * print_list - Displays the contents of a listint_t
 *
 * @list: Pointer to the head of the list
 */
void print_list(const listint_t *list)
{
	printf("List Contents:\n");
	while (list)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
	printf("\n");
}
