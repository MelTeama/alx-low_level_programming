#include "main.h"

/**
 *print_alphabet_x10 - alphabet print ten times
 */

void print_alphabet_x10(void)

{
	int n;
	int m;

	for (n = 0; n < 10; n++)

	{

	for (m = 'a'; m <= 'z'; m++)
		
		{
		_putchar(m);
		}

	_putchar('\n');

	}
}
