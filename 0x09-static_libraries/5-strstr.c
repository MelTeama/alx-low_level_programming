#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: main s
 * @needle: search in haystack
 * Return: return new string
 */

char *_strstr(char *haystack, char *needle)

{
char *s1, *s2;

while (*haystack != '\0')
{
s1 = haystack;
s2 = needle;
while (*haystack != '\0' && *s2 != '\0' && *haystack == *s2)
{
haystack++;
s2++;
}
if (*s2 == '\0')
return (s1);
haystack = s1 + 1;
}
return (0);
}
