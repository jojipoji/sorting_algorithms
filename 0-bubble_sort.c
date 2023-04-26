#include "sort.h"

/**
 * swap - Swap start and next index values.
 * @array: the start and next values array.
 * @start: the array start point.
 * @next: next point of the array.
 * Return: nothing.
 */
void swap(int *array, size_t start, size_t next)
{
	size_t temp = array[next];

	array[next] = array[start];
	array[start] = temp;
}

/**
 * bubble_sort - Sorting an array with bubble algorithm.
 * @array: the array to be sorted.
 * @size: size of the array.
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t start = 0;
	size_t next = 0;

	if (!array || size < 2)
		return;

	while (start < size)
	{
		next = 0;
		while (next < size - 1)
		{
			if (array[next] > array[next + 1])
			{
				swap(array, next, next + 1);
				print_array(array, size);
			}
			next++;
		}
		start++;
	}
}
