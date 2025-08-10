#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - selection sort
 * @array: a
 * @size: size
 *
 * Return:
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, indx;
	int len;

	if (!array || size < 2)
		return;

	for (i = 0 ; i < size - 1 ; i++)
	{
		indx = 1;
		for (j = i + 1 ; j < size ; j++)
		{
			if (array[j] < array[indx])
				indx = j;
		}
		if (indx != i)
		{
			len = array[i];
			array[i] = array[indx];
			array[indx] = len;

			print_array(array, size);
		}
	}
}

