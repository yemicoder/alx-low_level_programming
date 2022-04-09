#include <stdio.h>
#include <ctype.h>

/**
 * main - this program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
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
	char c;

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
