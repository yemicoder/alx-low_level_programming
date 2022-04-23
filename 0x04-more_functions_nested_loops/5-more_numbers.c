#include "main.h"

/**
 * more_numbers - print numbers 0 - 14 10 times
 *
 * @i: i variable
 * @x: x variable
 *
 * Return: always 0
 *
 */

void more_numbers(void)
{
	int i;
	int x;

	x = 0;
	for (i = 0; i <= 10; i++)
	{
	while (x <= 14)
	{
		_putchar('x + '0');
		x++;
	}
	}
	_putchar('\n');

}
