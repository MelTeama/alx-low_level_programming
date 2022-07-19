#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer
 * @size: size of array
 * Return: return void
 */

void print_diagsums(int *a, int size)

{
int i, s1;
unsigned int sd1, sd2;
s1 = 0;
sd1 = 0;
sd2 = 0;

s1 = (size * size) - 1;
for (i = 0; i <= s1; i = i + (size + 1))
{
sd1 = sd1 + a[i];
}
for (i = (size - 1); i < s1; i = i + (size - 1))
{
sd2 = sd2 + a[i];
}
printf("%d, %d\n", sd1, sd2);
}
