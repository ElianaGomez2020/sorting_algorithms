#include "sort.h"
/**
 * quick_sort - sorting algorithm
 *@array: unsorted array of integers
 *@size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	new_quick(array, size, 0, size - 1);
}

/**
 * new_quick - function that quicksort method
 *@array: unsorted array of integers
 *@size: size of the array
 *@low: low position
 *@high: hight position
 * Return: nothing
 */
void new_quick(int *array, size_t size, int low, int high)
{
	int pi = 0;

	if (low < high)
	{
		pi = partition(array, size, low, high);
		new_quick(array, size, low, pi - 1);
		new_quick(array, size, pi + 1, high);
	}
}
/**
 * partition - using quick sort method
 *@array: unsorted array of integers
 *@size: size of the array
 *@low: low position
 *@high: high position
 * Return: min_num
 */
int partition(int *array, size_t size, int low, int high)
{
	int pivot, min_num, aux, count;

	pivot = array[high];
	min_num = low;

	for (count = low; count < high; count++)
	{
		if (array[count] <= pivot)
		{
			aux = array[count];
			array[count] = array[min_num];
			array[min_num] = aux;
		if (count != min_num)
			print_array(array, size);
		min_num++;
		}
	}
	aux = array[count];
	array[count] = array[min_num];
	array[min_num] = aux;
	if (count != min_num)
		print_array(array, size);

	return (min_num);
}
