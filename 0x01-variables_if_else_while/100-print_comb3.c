#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * n: variable
 * x: variable
 * c: variable
 * b: variable
 *
 * Return:0
 *
 */

int main(void)
{
	int n;
	int x;
	int c;
	int b;

	n = 0;
	while (n <= 8)
	{
	x = 1;
	while (x <= 9)
	{
	b = x  + '0';
	c = n + '0';
	if (x > n && n != 8)
	{
	putchar(c);
	putchar(b);
	putchar(',');
	putchar(' ');
	}
	else
	{
	putchar('89');
	}
	x++;
	}
	n++;
	}
	return (0);
}
