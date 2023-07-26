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
 * lomuto_partition - partition format
 * @array: integer array
 * @size: array size
 * @f: first index array
 * @l: last index array
 * Description: partition format
 * Return: index position
 */
int lomuto_partition(int *array, size_t size, int f, int l)
{
	int pivot = array[l], k = f, m;

	for (m = f; m <= l - 1; m++)
	{
		if (array[m] < pivot)
		{
			if (k != m)
			{
				swap_int(&array[k], &array[m]);
				print_array(array, size);
			}
			k++;
		}
	}
	if (pivot != array[k])
	{
		swap_int(&array[k], &array[l]);
		print_array(array, size);
	}
	return (k);
}

/**
 * lomuto_sort - implement quick sort algorithm
 * @array: integer array
 * @size: array size
 * @f: first index array
 * @l: last index array
 * Return: 0
 */

void lomuto_sort(int *array, size_t size, int f, int l)
{
	int k;

	if (f < l)
	{
		k = lomuto_partition(array, size, f, l);
		lomuto_sort(array, size, f, k - 1);
		lomuto_sort(array, size, k + 1, l);
	}
}

/**
 * quick_sort - sort integer array using quick sort
 * @array: array to sort
 * @size: array size
 * Return: 0
 */

void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	lomuto_sort(array, size, 0, size - 1);
}
