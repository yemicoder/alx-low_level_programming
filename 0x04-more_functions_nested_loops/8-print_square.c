#include "main.c"

/**
 * print_square - print # in square pattern
 *
 * @x: variable
 * @y: variable
 */

void print_square(int size)
{
	int x;
	int y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
			_putchar('\n');
			if (size <= 0)
			{
			_putchar('\n');
			}
	}
}
