#include <stdio.h>
#include <ctype.h>

/**
 * main - entry level
 *
 * alphabet: first variable
 *
 * Return:0
 *
 */

int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
		putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
