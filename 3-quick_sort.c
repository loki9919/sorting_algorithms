#include "sort.h"

/**
 * swap_index - waps two index in an array
 * @array: The array
 * @a: The index of the left
 * @b: The index of the right
 */
void swap_index(int *array, size_t a, size_t b)
{
	int temp;

	if (array != NULL)
	{
		temp = array[a];
		array[a] = array[b];
		array[b] = temp;
	}
}
/**
 * quick_sort_range - Sorts a sub array
 * @array: The array
 * @min: The starting position 
 * @max: The ending position
 * @size: size of array
 */
void quick_sort_range(int *array, size_t min, size_t max, size_t size)
{
	size_t j, i;
	int tmp;

	if ((min >= max) || (array == NULL))
		return;
	tmp = array[max];
	j = min;
	for (i = min; i < max; i++)
	{
		if (array[i] <= tmp)
		{
			if (j != i)
			{
				swap_index(array, j, i);
				print_array(array, size);
			}
			j++;
		}
	}
	if (j != max)
	{
		swap_index(array, j, max);
		print_array(array, size);
	}
	if (j - min > 1)
		quick_sort_range(array, min, j - 1, size);
	if (max - j > 1)
		quick_sort_range(array, j + 1, max, size);
}
/**
 * quick_sort - function that sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: the array
 * @size: size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array != NULL)
	{
		quick_sort_range(array, 0, size - 1, size);
	}
}
