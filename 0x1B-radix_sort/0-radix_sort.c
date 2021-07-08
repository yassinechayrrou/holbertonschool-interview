#include "sort.h"
/**
 * num_len_digit - checks max element and count it's digits
 * @array: pointer to first element of array
 * @size: size of array
 * Return: integer maximum number of digits
 */
int num_len_digit(int *array, size_t size)
{
	int i = 0, j = 0, n = 0;

	for (i = 0; i < (int)size; ++i)
		if (array[i] > n)
			n = array[i];
	for (j = 0; n >= 1; ++j)
		n = n / 10;

	return (j);
}
/**
 * radix_sort - sorts an array using Radix sort algorithm
 * @array: pointer integer, first element of array to sort
 * @size: size of array
 */
void radix_sort(int *array, size_t size)
{
	int B[10][10], B_cnt[10];
	int i, j, k, r, max_digit_num, divisor = 1, pass;

	if (!array || size < 2)
		return;

	max_digit_num = num_len_digit(array, size);
	for (pass = 0; pass < max_digit_num; pass++)
	{
		for (i = 0; i < 10; i++)
			B_cnt[i] = 0;

		for (i = 0; i < (int)size; i++)
		{
			r = (array[i] / divisor) % 10;
			B[r][B_cnt[r]] = array[i];
			B_cnt[r] += 1;
		}
		i = 0;
		for (k = 0; k < 10; k++)
		{
			for (j = 0; j < B_cnt[k]; j++)
			{
				array[i] = B[k][j];
				i++;
			}
		}
		divisor *= 10;
		for (i = 0; i < (int)size - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[size - 1]);
	}
}
