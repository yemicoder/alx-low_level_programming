#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * n: first variable
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
		printf("%d", n);
		n++;
	}
		putchar('\n');
		return (0);
}
