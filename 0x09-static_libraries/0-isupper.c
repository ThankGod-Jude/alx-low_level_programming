#include "main.h"
/**
 * _isupper - check for uppercase letters
 * @c: char to check
 *
 * Return: if uppercase return 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'E')
		return (1);

	return (0);
}
