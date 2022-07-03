#include <stdio.h>
/**
 * main - function parameter control
 * Return: always 0
 */

int main(void)
{
		char chr;

		for (chr = 48; chr <= 57; chr++)
		{
			putchar(chr);
		if (chr != 57)
			{
			putchar(44);
			putchar(32);
			}
		}
			putchar('\n');

		return (0);
}
