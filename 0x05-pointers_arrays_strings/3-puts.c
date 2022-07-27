#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: Takes an entry input string
 */

void _puts(char *str)

{
<<<<<<< HEAD
int index;

for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
=======

for (; *str != '\0'; str++)
{
_putchar(*str);
>>>>>>> baf32b56bf400ff895a8d108f95d905037f620de
}
_putchar('\n');
}
