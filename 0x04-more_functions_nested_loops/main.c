#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - program ignition
 *
 * Return:0
 */

int mul(int a, int b)
{
        return (a * b);
}

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	return (0);
}
