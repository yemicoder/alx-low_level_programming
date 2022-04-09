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
	x = 1;
	while (n <= 9)
	{
	while (x <= 9)
	{
        b = x  + '0';
        c = n + '0';
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
