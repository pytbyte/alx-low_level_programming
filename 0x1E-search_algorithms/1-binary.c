#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search.
 * @array: A pointer to the first element of the sorted array to search in.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If value is not present or if array is NULL, must return -1
 *
  */
int binary_search(int *array, size_t size, int value)
{
	int lower, higher, midum, i;

	if (array == NULL)
		return (-1);

	higher = size - 1;
	lower = 0;

	while (lower <= higher)
	{
		midum = (lower + higher) / 2;

		printf("Searching in array: ");
		for (i = lower; i <= higher; i++)
		{
			if (i == lower)
				printf("%d", array[i]);
			else
				printf(", %d", array[i]);
		}
		printf("\n");

		if (array[midum] == value)
			return (midum);
		else if (array[midum] < value)
			lower = midum + 1;
		else
			higher = midum - 1;
	}

	return (-1);
}
