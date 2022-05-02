#include "main.h"

/**
 * *_strncat - function to concatenate 2 string
 * @dest: destination
 * @src: source
 * @n: amount of bytes used
 * Return: the pointer to destination
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
