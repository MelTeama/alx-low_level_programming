#include "main.h"

/**
 * print_alphabet - print alphabets using putchar
 * Return: always 0
 */

void print_alphabet(void)

{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');

}
