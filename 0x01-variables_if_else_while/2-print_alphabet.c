#include <stdio.h>
/**
 * main - entry point
 *
 * alphabet: first variable
 *
 * Rerutn:0
 *
 */

int main(void)
{	char alphabet;

	alphabet = 'a';

	while (alphabet <= 'z')
	{
		printf("%c", alphabet);
		alphabet++;
	}
	return (0);
}
