#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
{	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		alphabet++;
	alphabet = tolower(alphabet);
		putchar(alphabet);
	}
	return (0);
}
