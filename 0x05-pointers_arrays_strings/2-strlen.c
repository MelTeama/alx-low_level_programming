#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: Takes an entry input string
 * Return: Length of the string
 */

int _strlen(char *s)

{
int index;

for (index = 0; s[index] != '\0' ; index++);
return (index);
}