#include "main.h"

/**
 * _memset - fills memory
 * @s: string source
 * @b: contant byte for filling
 * @n: length of buffer
 * Return: string new
 */

char *_memset(char *s, char b, unsigned int n)

{
unsigned int i = 0;
while (i < n)
{
*(s + i) = b;
i++;
}
return (s);
}
