#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 * @x: a string
 * Return: return a string which is encoded
 */

char *leet(char *x)

{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', '0', 'T', 'L'};
char trw[5] = {'4', '3', '0', '7', '1'};

while (x[a])
{
b = 0;

while (b < l)
{
if (x[a] == tr[b] || x[a] - 32 == tr[b])
x[a] = trw[b];
b++;
}
a++;
}
return (x);
}
