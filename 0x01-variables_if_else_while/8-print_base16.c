#include <stdio.h>
/**
 * main - function parameter control
 * Return: always 0
 * hexadecimals (0123456789abcdef)
 */

int main(void)
{
		char chr;
		int n;

		for (n = 48; n < 58; n++)
		{
			putchar(n);
		}
		for (chr = 'a'; chr <= 'f'; chr++)
		{
			putchar(chr);
		}
			putchar('\n');

			return (0);
}
