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

        while (i <= 9)
        {
        putchar(i + '0');
	i++;
        }
	putchar('\n');
}
void more_numbers(void)
{
        int i;
        int x;

        for (i = 0; i < 10; i++)
        {
        	for (x = 0; x < 15; x++)
        {
		if (x > 9)
		{
		putchar(x / 10 + '0');
		}
		putchar(x % 10 + '0');
        }
        putchar('\n');
        }
}

int main(void)
{
	printf("%d\n", mul(98, 1024));
	printf("%d\n", mul(-402, 4096));
	print_numbers();
	more_numbers();
	return (0);
}
