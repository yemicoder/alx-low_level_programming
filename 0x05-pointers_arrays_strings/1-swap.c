#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * swap_int - function to swap values
 *
 * @a : variable a
 * @b : variable b
 * @temp: variable to hold swap
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

