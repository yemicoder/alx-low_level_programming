#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - this function prints numbers 0 - 9
 *
 * @i: variable i
 * @c: variable c
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
	c = i + '0';
	_putchar(c);
	i++;
	}
	_putchar('\n');
}
