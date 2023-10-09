#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * linear_search - a function that searches for a value
 * in an array of integers using
 * Linear search algorithm
 *
 * @array: A pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: an integer value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	bool found = false;
	int index;

	while (i < size)
	{
		if (array == NULL)
                {
                        return (-1);
                }
		else if (array[i] == value)
		{
			printf("value checked array[%ld] = [%d]\n", i, array[i]);
			index = i;
			found = true;
			break;
		}
		else if (array[i] != value)
		{
			printf("value checked array[%ld] = [%d]\n", i, array[i]);
			i++;
		}
	}
	if (found == false)
	{
		return (-1);
	}
	else
		return (index);
}
