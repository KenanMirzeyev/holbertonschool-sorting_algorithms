#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - list
 * @list: list
 *
 * Return: r
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	curr = (*list)->next;
	while (curr)
	{
		tmp = curr;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			listint_t *prev = tmp->prev;

			if (prev->prev)
				prev->prev->next = tmp;
			tmp->prev = prev->prev;

			prev->prev = tmp;
			prev->next = tmp->next;

			if (tmp->next)
				tmp->next->prev = prev;

			tmp->next = prev;

			if (!tmp->prev)
				*list = tmp;
			print_list(*list);
		}
		curr = curr->next;
	}
}
