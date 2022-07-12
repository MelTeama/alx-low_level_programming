#include "main.h"

/**
 * _strcpy -   function that copies the string pointed to by src
 * @dest: pointer to array
 * @scr: a copia
 * Return: copy to be returned
 */

char *_strcpy(char *dest, char *src)

{
char *start = dest;

while (*src != '\0')

{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}
