#include "main.h"

/**
 * _sqrt_recursion - find natural squar root
 * @n: int
 * @val: squar root
 * Return: int
 */

int squar(int n, int val);
int _sqrt_recursion(int n)
{
	return (squar(n, 1));
}

/**
 * squar - find squar root
 * @n: int
 * @val: squar root
 * Return: int
 */

int squar(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (squar(n, val + 1));
	else
		return (-1);
}
