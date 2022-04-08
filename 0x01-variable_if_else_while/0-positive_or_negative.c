#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * n: first operand
 * Return:0
 */

int main(void)

{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	puts("is positive");
	}
	else if (n < 0)
	{
	puts("is negative");
	}
else(n = 0)
	{
	puts("is zero");
	}
	return (0);
}
