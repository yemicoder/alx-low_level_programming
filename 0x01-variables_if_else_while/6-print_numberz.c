#include <stdio.h>
#include <ctype.h>

/**
 * main - this program that prints all single digit
 *
 * n: integer 0-10
 *
 * c: char to hold for output with putchar
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
	n++;
	}
	putchar('\n');
	return (0);
}
