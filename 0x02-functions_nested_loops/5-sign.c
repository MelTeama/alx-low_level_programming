#include "main.h"

/**
 * print_sign - returns based on conditions
 * @n: takes in a number
 * Return: 1 for positie and 0 for zero and -1 for negatives
 */

int print_sign(int n)

{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		else if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}

}
