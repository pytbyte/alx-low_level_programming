#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array
 *               of integers using jump search.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 *
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, prev, current;

	if (array == NULL || size == 0)
		return (-1);

	jump = (int)sqrt(size);
	prev = 0;
	current = 0;

	while (current < (int)size && array[current] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
			current, array[current]);
		prev = current;
		current += jump;
	}

	printf("Value found between indexes [%d] and [%d]\n",
		prev, current);

	/* stay within array size */
	current = current < (int)size ? current : (int)size - 1;

	while (prev < current && array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);

	return (-1);
}
