#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a random number would be assigned to a var n and leveled with sign
 * Return: always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
