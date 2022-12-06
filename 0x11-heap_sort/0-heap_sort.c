#include "sort.h"

/**
 * heap_sort - Sorts an array of integers in ascending order using the Heap
 * sort algorithm
 *
 * @array: The array to be sorted
 * @size: Number of elements in @array
 */

void heap_sort(int *array, size_t size)
{
	int i, temp;
	/*True only if either one operand is true*/
	if (array == NULL || size < 2)
		return;

	for (i = size / 2 - 1; i >= 0; i--)
		heapify(array, size, i, size);

	for (i = size - 1; i > 0; i--)
	{
		temp = array[0];
		array[0] = array[i];
		array[i] = temp;
		print_array(array, size);
		heapify(array, i, 0, size);
	}
}

/**
 * heapify - Builds a heap from an array
 *
 * @array: The array to be heapified
 * @size: Number of elements in @array
 * @i: Index of the element to be heapified
 * @original_size: Original size of the array
 */

void heapify(int *array, size_t size, int i, size_t original_size)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;
	int temp;

	if (left < (int)size && array[left] > array[largest])
		largest = left;

	if (right < (int)size && array[right] > array[largest])
		largest = right;

	if (largest != i)
	{
		temp = array[i];
		array[i] = array[largest];
		array[largest] = temp;
		print_array(array, original_size);
		heapify(array, size, largest, original_size);
	}
}
