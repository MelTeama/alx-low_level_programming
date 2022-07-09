#include "stdio.h"

/**
 * print_line - a function drawing straight line
 * @n: takes in a number
 * Return: last digit as output
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
			_putchar('\n');
	}
		else
		{
		_putchar('\n');
	}
}
