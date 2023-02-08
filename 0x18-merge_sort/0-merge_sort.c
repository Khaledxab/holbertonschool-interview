#include "sort.h"

/**
 * merge - merge elements
 *
 * @array: array
 * @arr: second array
 * @start: start
 * @middle: middle
 * @end: end
 * Return: Nothing
 */
void merge(int *array, int *arr, int start, int middle, int end)
{
	int i, j, k;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(array + start, middle - start);
	printf("[right]: ");
	print_array(array + middle, end - middle);

	for (i = start, j = middle, k = 0; i < middle && j < end; k++)
		if (array[i] < array[j])
			arr[k] = array[i++];
		else
			arr[k] = array[j++];
	while (i < middle)
		arr[k++] = array[i++];
	while (j < end)
		arr[k++] = array[j++];
	for (i = start, k = 0; i < end; i++)
		array[i] = arr[k++];

	printf("[Done]: ");
	print_array(array + start, end - start);
}

/**
 * split - spliter
 *
 * @array: array
 * @arr: second array
 * @start: start
 * @end: end
 * Return: Nothing
 */
void split(int *array, int *arr, int start, int end)
{
	int middle;

	if (end - start > 1)
	{
		middle = (end - start) / 2 + start;
		split(array, arr, start, middle);
		split(array, arr, middle, end);
		merge(array, arr, start, middle, end);
	};
}

/**
 * merge_sort - sorts an array
 * using the Merge Sort algorithm
 *
 * @array: array unordered
 * @size: size of the array to ordered
 * Return: Nothing
 */
void merge_sort(int *array, size_t size)
{
	int *arr;

	arr = malloc(sizeof(int) * size);
	split(array, arr, 0, size);
	free(arr);
}
