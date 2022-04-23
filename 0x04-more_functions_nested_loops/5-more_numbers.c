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

	for (i = 0; i <= 10; i++)
	{
	for (x = 0; x <= 14; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
	}
}
