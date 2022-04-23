#include "main.h"

/**
 * print_line - print a straight line on terminal
 *
 * @x: variable x
 * @n: variable y
 *
 * Return : 0 always
 */

void print_line(int n)
{
	int x = 0;

	for (n = 1; x >= n; n++)
	{
		if (x != 0)
		{
		_putchar('_');
		}
		_putchar('\n');
	}
}
