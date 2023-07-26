#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked integer list in ascending order
 * @list: double linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *now, *before, *prevv, *now1, *currnext;

	if (list == NULL)
		return;

	now = *list;

	while (now)
	{
		if (now->prev && now->prev->n > now->n)
		{
			before = now->prev->prev;
			prevv = now->prev;
			now1 = now;
			currnext = now->next;
			prevv->next = currnext;

			if (currnext)
				currnext->prev = prevv;
			now1->prev = before;
			now1->next = prevv;

			if (before)
				before->next = now1;
			else
				*list = now1;
			prevv->prev = now1;
			now = *list;
			print_list(*list);
			continue;
		}
		else
			now = now->next;
		}
}
