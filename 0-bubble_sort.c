#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - bubble
 * @array: a
 * @size: s
 *
 * Return: array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swap;

	if (!array || size < 2)
		return;

	for (i = 0 ; i < size ; i++)
	{
		swap = 0;
		for (j = 0 ; j < size - i - 1 ; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (!swap)
			break;
	}
}
