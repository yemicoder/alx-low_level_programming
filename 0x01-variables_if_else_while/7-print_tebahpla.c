#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * alphabet: first variable
 *
 * Return:0
 *
 */

int main(void)
{
	char alphabet;

	alphabet = 'z';
	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
