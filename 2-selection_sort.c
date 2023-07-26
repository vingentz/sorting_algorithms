#include "sort.h"

/**
 * swap_int - swap 2 elements in an array
 * @a: first element
 * @b: second element
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sort integer array using selection sort
 * @array: array to sort
 * @size: array size
 */

void selection_sort(int *array, size_t size)
{
	size_t k, l, minnum;

	for (k = 0; k < size - 1; k++)
	{
		minnum = k;

		for (l = k + 1; l < size; l++)
			if (array[l] < array[minnum])
				minnum = l;
		if (minnum != k)
		{
			swap_int(&array[minnum], &array[k]);
			print_array(array, size);
		}
	}
}
