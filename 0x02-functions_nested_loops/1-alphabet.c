#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter  = 'a'; letter <= 122; letter++)
		_putchar(letter);

	_putchar('\n');
}
