#include "sort.h"
#include <stdbool.h>

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - sorts an array of integers in ascending order,
 * using the Selection sort algorithm
 * @array: using the array.
 * @size: the size of the array.
**/

void selection_sort(int *array, size_t size)
{
	int *jhay;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		jhay = array + i;
		for (j = i + 1; j < size; j++)
		jhay = (array[j] < *jhay) ? (array + j) : jhay;

	if ((array + i) != jhay)
	{
	swap_ints(array + i, jhay);
		print_array(array, size);
	}
	}
}
