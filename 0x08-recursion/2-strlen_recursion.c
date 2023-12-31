#include "main.h"

/**
 * _strlen_recursion - print the length of string
 * @s: the length of string to return
 *
 * Return: integer value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}

