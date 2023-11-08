#include "main.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: the string to return its length
 *
 * Return: the length of s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
