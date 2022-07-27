#include "main.h"

/**
 * _memcpy - fills memory
 * @dest: string source
 * @src: string for filling
 * @n: length of buffer
 * Return: return new string
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
