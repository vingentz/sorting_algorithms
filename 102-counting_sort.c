#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * counting_sort - sort array using counting sort
 * @array: array to sort
 * @size: array length
 * Return: Nothing.
 */
void counting_sort(int *array, size_t size)
{
	unsigned int a = 1;
	int *num = NULL, b = 0, c = 0;

	if (array == NULL || size < 2)
		return;

	b = array[0];
	for (; a < size; a++)
	{
		if (array[a] > b)
			b = array[a];
	}
	num = malloc(sizeof(int) * (b + 1));
	if (num == NULL)
		return;

	for (c = 0; c <= b; c++)
		num[c] = 0;
	for (a = 0; a < size; a++)
		num[array[a]] += 1;
	for (c = 0; c < b; c++)
	{
		num[c + 1] += num[c];
		printf("%d, ", num[c]);
	}
	num[c + 1] += num[c];
	printf("%d\n", num[c + 1]);
	for (a = 0; a < size; a++)
	{
		c = num[array[a]] - 1;
		if (array[a] != array[c])
		{
			b = array[a];
			array[a] = array[c];
			array[c] = b;
		}
	}
	free(num);
}
