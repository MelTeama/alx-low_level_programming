#include "main.h"

/**
 * _strchr - character locater
 * @s: string
 * @c: character
 * Return: pointer to the first charactor c in string s
 */

char *_strchr(char *s, char c)

{
while (*s != '\0') /*Declaring  While*/
{
if (*s == c) /*if s == c*/
{
return (s);  /*return s*/
}
++s;
}
if (*s == c)
{
return (s);
}
return (0); /*null value*/
}
