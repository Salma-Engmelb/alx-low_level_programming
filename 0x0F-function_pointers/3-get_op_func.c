#include <stdlib.h>
#include "3-calc.h"
/**
  * get_op_func - decides which math to use based on the operator
  * @s: pointer to string
  * Return: result of the operation
  */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[O] && !s[1])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
