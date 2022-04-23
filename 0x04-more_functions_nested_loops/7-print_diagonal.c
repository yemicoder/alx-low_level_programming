#include "main.h"

/**
 * print_diagonal - print \ in diagonal
 *
 * @x : variable
 * @y : variable
 * @n : variable
 *
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= n; y++)
		{
			if (x > y)
			{
			_putchar(' ');
			}
			if (y == x)
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
		}
		if (n <= 0)
		{
			_putchar('\n');
		}
}
