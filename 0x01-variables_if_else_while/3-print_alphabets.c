#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print both lower and upper case letters'
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int q = 65;

	while (n <= 122)
	{
		putchar(n);
	}
	while (n <= 90)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
