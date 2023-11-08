#include "main.h"

/**
 * _memset - Fills the memory with a constant byte
 * @s: a pointer to the memory area to fill
 * @b: the byte to write
 * @n: the number of bytes to fill
 *
 * Return: @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
