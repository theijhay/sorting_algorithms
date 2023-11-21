#include "sort.h"
#include <stdbool.h>

/**
 * bubble_sort - sorts a doubly linked list of integers in ascending order.
 * using the Insertion sort algorithm.
 *@array: the array.
 *@size: the size of the array.
**/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, n = size;
	int temp;
	int new;

do {
	new = 0;
	for (i = 1; i < n; i++)
	{
	if (array[i - 1] > array[i])
	{
	temp = array[i - 1];
	array[i - 1] = array[i];
	array[i] = temp;
	new = 1;
	/** print the array after each time you swap two elements **/
	print_array(array, size);
	}
	}
	} while (new);
}
