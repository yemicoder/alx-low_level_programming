#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * lalphabet: first operand
 * ualphabet: second operand
 *
 * Return:0
 *
 */

int main(void)
{
	char lalphabet;
	char ualphabet;

	lalphabet = 'a';
	while (lalphabet <= 'z')
	{
	putchar(lalphabet);
	lalphabet++;
	}
	ualphabet = 'A';
	while  (ualphabet <= 'Z')
	{
	putchar(ualphabet);
	ualphabet++;
	}
	putchar('\n');
	return (0);
}
