#include "sort.h"
#include <stdio.h>

/**
 *bubble_sort - function that sorts an array of integers
 *@array: array of integers
 *@size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp;
	size_t a, i;

	if (!array || size == 0)
		return;

	a = 0;
	while (a < size)
	{
		for (i = 0; i < size -1; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		a++;
	}
}
