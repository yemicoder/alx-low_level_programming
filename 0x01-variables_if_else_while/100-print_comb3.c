#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * n: variable
 * x: variable
 * c: variable
 *
 * Return:0
 *
 */

int main(void)
{
	int n;
	int x;
	int c;

	n = 0;
	x = 1;
	while (n <= 9)
	{
	x = n + 1;
	b = n + 1 + '0';
	c = n + '0';
	while (x <= 9)
	{
	putchar(c);
	putchar(b);
	putchar(',');
	putchar(' ');
	x++;
	}
	n++;
	}
	putchar('\n');
	return (0);
}
