#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - print consecutive character
 * @s: string source
 * @accept: search string
 * Return: return new string
 */

char *_strpbrk(char *s, char *accept)

{
unsigned int i, j;

for (i = 0; *(s + i); i++)
{
for (j = 0; *(accept + j); j++)
{
<<<<<<< HEAD
if (*(s + j) == *(accept + j))
=======
if (*(s + i) == *(accept + j))
>>>>>>> baf32b56bf400ff895a8d108f95d905037f620de
{
break;
}
}
if (*(accept + j) != '\0')
{
return (s + i);
}
}
return (0);
}
