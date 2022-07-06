#include "main.h"

/**
 * print_last_digit - last digit printing
 * @n: takes in a number
 * Return: last digit as output
 */

int print_last_digit(int n)

{
	int ld = n % 10;

	if (n < 0)
		ld = ld * -1;

	_putchar(ld + '0');

	return (ld);
}
