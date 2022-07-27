#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: string type one
 * @src: string type two
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)

{
int index = 0, dest_len = 0;
while (dest[index++])
dest_len++;
for (index = 0; src[index]; index++)
dest[dest_len++] = src[index];
return (dest);
}
<<<<<<< HEAD

=======
>>>>>>> baf32b56bf400ff895a8d108f95d905037f620de
