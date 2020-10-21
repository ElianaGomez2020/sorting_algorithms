#include "sort.h"
/**
 * selection_sort - Sort with selection algorithm
 *
 * @array: The array
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int tmps = 0;

	if (array == NULL || size == 0)
		return;
	for (i = 0 ; i < size - 1 ; i++)
	{
		tmp = i;
		for (j = i + 1 ; j < size; j++)
		{
			if (array[j] < array[tmp])
				tmp = j;
		}
		if (i != tmp)
		{
			tmps = array[i];
			array[i] = array[tmp];
			array[tmp] = tmps;
			print_array(array, size);
		}
	}
}
