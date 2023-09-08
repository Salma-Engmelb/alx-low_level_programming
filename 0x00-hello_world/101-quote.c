#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
 * followes by a newline,to standard error
 * Return: Always 1 (Success)
 */

int main(void)

{
	fput("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",stdout);
	return (1);
}
