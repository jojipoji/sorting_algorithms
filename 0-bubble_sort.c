#include "sort.h"

/**
 * swap - Swap start and next index values.
 * @array: the start and next values array.
 * @start: the array start point.
 * @next: next point of the array.
 * Return: nothing.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	int swaps = -1;  /* swap counter */

	/* An array does not need to be sorted if it's size is less than 2 */
	if (size < 2)
		return;

	/* repeat until swap counter is equal to 0 */
	while (swaps)
	{
		/* resets swap counter to 0 */
		swaps = 0;

		/* looks at each pair */
		for (i = 0; i < size - 1; i++)
		{
			/* if the adjacent elements are not in order */
			if (array[i] > array[i + 1])
			{
				/* swap them */
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				/* increment swap counter */
				swaps++;

				/* print the array */
				print_array(array, size);
			}
		}
	}
}
