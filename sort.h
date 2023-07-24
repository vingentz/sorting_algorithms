#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/*
 * struct listint_s - Doubly linked list node
 * @n: Integer stored in node
 * @prev: Pointer to previous list element
 * @next: Pointer to next list element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

int partition(int *array, int start, int end, size_t size);
void quick(int *array, int start, int end, size_t size);

void swap_nodes(listint_t **head, listint_t **node1, listint_t *node2);
void insertion_sort_list(listint_t **list);

#endif
