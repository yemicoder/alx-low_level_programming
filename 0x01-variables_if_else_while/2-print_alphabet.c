#include <stdio.h>
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
		printf("%c", alphabet);
		alphabet++;
		printf("/n");
	}
	return (0);
}
