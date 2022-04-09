#include <stdio.h>
#include <ctype.h>

/**
 * main - print all the numbers of bases 16 in lowercase
 *
 * hex_no: numbers
 * hex_letters: letters
 * c: char to hold some values
 *
 * Return:0;
 *
 */

int main(void)
{
	int hex_no;
	char hex_letters;
	char c;

	hex_no = 0;
	hex_letters = 'a';
	while (hex_no <= 9)
	{
		c = hex_no + '0';
		putchar(c);
		hex_no++;
	}
	while (hex_letters <= 'f')
	{
		putchar(hex_letters);
		hex_letters++;
	}
	putchar('\n');
	return (0);
}
