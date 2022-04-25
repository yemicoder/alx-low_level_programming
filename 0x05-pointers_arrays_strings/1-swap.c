#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * swap_int - function to swap values
 *
 * @a : variable a
 * @b : variable b
 *
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;
	*a = b;
	*b = a;
}

