#include "main.h"

/**
 * string_toupper - reverses the content of an array of integers
 * @str: parameter
 * Return: return a character
 */

char *string_toupper(char *str)

{
int index = 0;

while (str[index++])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
}
return (str);
}
<<<<<<< HEAD

=======
>>>>>>> baf32b56bf400ff895a8d108f95d905037f620de
