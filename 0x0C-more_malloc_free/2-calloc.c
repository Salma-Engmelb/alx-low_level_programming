#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer
 * @b: constant
 * @n: max byte to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}


/**
 * _calloc - Allocate memory for an array, using malloc
 * @nmemb: array length
 * @size: Size in bytes of elements
 *
 * Return: Pointer to new memory, NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(sizeof(int) * nmemb);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nmemb);
	return (m);
}
