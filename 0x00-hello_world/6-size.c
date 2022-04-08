#include <stdio.h>

/**
 * main - entry point
 * i: first operand
 * d: second operand
 * c: third operand
 * f: fourth operand
 *
 * Return: 0
 *
 */

int main(void)

{

int i;
double d;
char c;
float f;

printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
printf("size of a double: %lu./", (unsigned long)sizeof(d));
printf("size of a float: %lu./", (unsigned long)sizeof(f));

return (0);

}

