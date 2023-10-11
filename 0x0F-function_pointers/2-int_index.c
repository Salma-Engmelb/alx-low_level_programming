#include "function_pointers.h"
#include <stdlib.h>
/**
  * int_index - searches for an integer
  * @array: the integer array
  * @size: size of the array
  * @cmp: the compare function
  * Return: the integer index
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
