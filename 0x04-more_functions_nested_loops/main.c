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

void print_numbers(void)
{
	int i = 0;
	char c;

        while (i <= 9)
        {
	c = i + '0';
        putchar(c);
	i++;
        }
	putchar('\n');
}

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	print_numbers();
	return (0);
}
