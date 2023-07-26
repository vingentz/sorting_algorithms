#include "sort.h"

/*
 * bubble_sort - sorts integer array in ascending order
 * @array: array to sort
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{
	size_t k, l;
	int lab;
	int repl;

	if (array == NULL || size < 2)
		return;
	for (k = 0; k < size - 1; k++)
	{
		repl = 0;/*replacements done?*/
		for (l = 0; l < size - k - 1; l++)
		{
			if (array[l] > array[l + 1])/*replacement*/
			{
				lab = array[l];
				array[l] = array[l + 1];
				array[l + 1] = lab;
				repl = 1;
				print_array(array, size);
			}
		}
		if (repl == 0)
		{
			return;
		}
	}
}
