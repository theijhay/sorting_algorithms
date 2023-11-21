#include "sort.h"
#include <stdbool.h>
#include <stdio.h>
/**
 * bubble_sort - sorts a doubly linked list of integers in ascending order.
 * using the Insertion sort algorithm.
 *@array: the array.
 *@size: the size of the array.
**/

void bubble_sort(int *array, size_t size) 
{
       	unsigned int i, n = size;
	int new;

 do {
	new = 0;

	for (i = 1; i < n; i++)
	{
	if (array[i - 1] > array[i])
	{
		
	int temp = array[i];
	array[i] = array[i + 1];
	array[i + 1] = temp;
	temp = 1;
	}
	}
 	} while (new);
}
