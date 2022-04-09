#include <stdio.h>
#include <ctype.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * n: variable
 * x: variable
 * c: variable
 *
 */

int main(void)
{
	int n;
	int x;
	int c;

	n = 0;
	while (n <= 9)
	{
	x = n + 1 + '0';
	c = n + '0';
	putchar(c);
	putchar(x);
	putchar(',');
	putchar(' ');
	n++;
	}


}
