#include <stdio.h>
#include <ctype.h>

/**
 * main - priints all possible combinations of single-digit numbers
 *
 * n: numbers to print
 * c: scope variable to manipulate char
 *
 * Return:0
 *
 */

int main(void)
{
	int n;
	int c;

	n = 0;
	while (n <= 9)
	{
		c = n + '0';
		putchar(c);
		if (n != 9)
		{
		putchar(',');
		}
		putchar(' ');
		n++;
	}

	return (0);
}
