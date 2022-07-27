#include "main.h"
#include <stdlib.h>

/**
 * *create_array - a function that creates an array of chars
 * @c: a specific char
 * @size: size of array
 * Return: null if fails or pointer to array
 */

char *create_array(unsigned int size, char c)

{
char *arr;
unsigned int i;
if (size == 0)
{
return (NULL);
}
arr = malloc(sizeof(char) * size);
/* check for successsful path */
if (arr == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
