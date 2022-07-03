#include <stdio.h>
/**
 * main - function parameter control
 * Return: always 0
 */

int main(void)
{
		int chr;

		for (chr = 'a'; chr <= 'z'; chr++)
		if (chr != 'q' && chr != 'e')
		{
			putchar(chr);
		}
			putchar(10);

			return (0);
}
