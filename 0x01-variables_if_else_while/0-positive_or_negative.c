#include <stdio.h>
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
	printf("%d is positive\n");
	}
	else if (n < 0)
	{
	printf("%d is negative\n");
	}
	else
	{
	printf("%d is zero\n");
	}
	return (0);
}
