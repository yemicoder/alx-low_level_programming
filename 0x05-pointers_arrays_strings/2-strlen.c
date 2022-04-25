#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - function to return the lenght of a string
 *
 * @i : variable i
 * @s : variable s
 *
 * Return : 0
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s < '\0'; s++)
	{
		i++;
	}
	return (i);
}
