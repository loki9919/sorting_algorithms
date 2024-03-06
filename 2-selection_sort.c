#include "sort.h"
#include <stdio.h>
/**
 *selection_sort -  function that sorts an array of integers
 *in ascending order using the Selection sort algorithm
 *@array: the array
 *@size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, min, step;
	int tmp;

	if (!array || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (step = size - 1, min = i + 1; step > i; step--)
		{
			if (array[min] > array[step])
			{
				min = step;
			}
		}
		if (array[min] < array[i])
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
		}
	}
}
