#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
<<<<<<< HEAD
 * @str: string
 * Return: return a string
 */

char *cap_string(char *str)
{
int index = 0;

while (str[++index])
{
while (!(str[index] >= 'a' && str[index] <= 'z'))
index++;

if (str[index - 1] == ' ' ||
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}')
str[index] -= 32;
}
return (str);
=======
 * @x: string to capitalize
 * Return: return a string
 */

char *cap_string(char *x)
{
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"',
'(', ')', '{', '}'};
int len = 13;
int a = 0, i;

while (x[a])
{
i = 0;
while (i < len)
{
if ((a == 0 || x[a - 1] == spc[i]) && (x[a] >= 97 &&
x[a] <= 122))
x[a] = x[a] - 32;
i++;
}
a++;
}
return (x);
>>>>>>> baf32b56bf400ff895a8d108f95d905037f620de
}
