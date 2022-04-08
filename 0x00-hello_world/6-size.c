#include <stdio.h>

/**
 * main - entry point
 * c: first operand
 * i: second operand
 * l: third operand
 * p: fourth operand
 * f: fifth operand
 *
 * Return: 0
 *
 */

int main(void)

{

char c;
int i;
long l;
long long p;
float f;

printf("Size of a char: %lu\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu\n", (unsigned long)sizeof(l));
printf("size of a long long int: %lu\n", (unsigned long)sizeof(p));
printf("size of a float: %lu\n", (unsigned long)sizeof(f));

return (0);

}

