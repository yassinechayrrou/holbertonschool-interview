#include "sort.h"

/**
 * merge - merges left and right splits of an array
 * @array: pointer to first element in array
 * @right_array: right subarry of array
 * @left_array: left subarry of array
 * @size: size of array.
 * Return: void
 */

void merge(int *array, int *left_array, int *right_array, size_t size)
{
	int i = 0, j = 0, k = 0;
	int left = size / 2;
	int right = size - left;

	while (i < left && j < right)
	{
		if (left_array[i] <= right_array[j])
		{
			array[k] = left_array[i];
			i++;
		}
		else
		{
			array[k] = right_array[j];
			j++;
		}
		k++;
	}
	while (i < left)
	{
		array[k] = left_array[i];
		i++;
		k++;
	}
	while (j < right)
	{
		array[k] = right_array[j];
		j++;
		k++;
	}

	printf("Merging...\n[left]: ");
	print_array(left_array, left);
	printf("[right]: ");
	print_array(right_array, right);
	printf("[Done]: ");
	print_array(array, size);
}

/**
 * merge_sort - Sorts an array of integers using merge sort algorithm
 * @array: pointer to first element in array
 * @size: size of array
 *
 */

void merge_sort(int *array, size_t size)
{
	int i;
	int right_arr[512], left_arr[512];
	int mid = (int)size / 2;

	if (size < 2)
		return;
	for (i = 0; i < mid; i++)
	{
		left_arr[i] = array[i];
	}
	for (i = mid; i < (int)size; i++)
	{
		right_arr[i - mid] = array[i];
	}
	merge_sort(left_arr, mid);
	merge_sort(right_arr, size - mid);
	merge(array, left_arr, right_arr, size);
}
