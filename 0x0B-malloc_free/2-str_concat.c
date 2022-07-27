#include "main.h"
#include <stdlib.h>
#include <stdlio.h>

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: pointer to new memory of s1, s2 or null byte
 */

char *str_concat(char *s1, char *s2)

{
char *nstr;
unsigned int len1, len2, size, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
size = len1 + len2;
nstr = malloc(sizeof(char) * size) + 1));
if (nstr == NULL)
return (NULL);
i = 0;
while (i < len1)
{
nstr[i] = s1[i];
i++;
}
j = 0;
while (i <= size)
{
nstr[i] = s2[j];
j++;
j++;
}
return (nstr);
}
