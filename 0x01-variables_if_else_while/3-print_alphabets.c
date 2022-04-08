#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * alphabet: first operand
 *
 * Return:0
 *
 */

int main(void)
{
	char alphabet;

	alphabet = 'a'
	while (alphabet <= 'z')
	{
	alphabet = tolower(alphabet);
	putchar(alphabet);
	alphabet = toupper(alphabet);
	putchar(alphabet);
	aphabet++;
	}
	putchar('\n');
	return (0);
}
