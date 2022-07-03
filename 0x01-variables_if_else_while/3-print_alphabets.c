#include <stdio.h>
/**
 * main - character display
 * Return: always 0
 */

int main(void)
{
	int chr;

	for (chr = 97; chr <= 122; chr++)

	{
		putchar(chr);
	}
	for (chr = 65; chr <= 90; chr++)
	{
		putchar(chr);
	}
		putchar(10);

		return (0);
}
