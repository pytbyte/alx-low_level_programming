#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        of integers using interpolation search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lower = 0, higher = size - 1, target;

	if (array == NULL)
		return (-1);

	while (lower <= higher)
	{
		target = lower + (((double)(higher - lower) / (array[higher] - array[lower]))
			* (value - array[lower]));

		if (target < size)
		{
			printf("Value checked array[%lu] = [%d]\n", target, array[target]);

			if (array[target] == value)
				return (target);

			if (array[target] > value)
				higher = target - 1;
			else
				lower = target + 1;
		}
		else
		{
			printf("Value checked array[%lu] is out of range\n", target);
			break;
		}
	}

	return (-1);
}
