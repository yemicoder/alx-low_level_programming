#include <stdio.h>
#include <ctype.h>

/**
 * main - priints all possible combinations of single-digit numbers
 *
 * n: numbers to print
 *
 * Return:0
 *
 */

int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		putchar(n);
		putchar(", ")
		n++
	}
	putchar('\n');
	return (0);
}
