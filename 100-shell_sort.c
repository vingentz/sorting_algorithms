#include "sort.h"

/**
 * shell_sort - sorts array using shell algorithm
 * @array: array to sort
 * @size: array length
 */
void shell_sort(int *array, size_t size)
{
	unsigned int k = 0, l = 0, gap = 0;
	int all = 0;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (k = gap; k < size; k++)
		{
			all = array[k];
			for (l = k; l >= gap && array[l - gap] > all;
				l -= gap)
			{
				if (array[l] != array[l - gap])
					array[l] = array[l - gap];
			}
			if (array[l] != all)
				array[l] = all;
		}
		print_array(array, size);
	}
}
