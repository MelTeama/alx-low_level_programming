#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13
 * @str: string
 * Return: return a encoded string
 */

char *rot13(char *)

{
int index1, index2;

char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
'G', 'H', 'I', 'J', 'K', 'L',
'M', 'N', 'O', 'P', 'Q', 'R',
'S', 'T', 'U', 'V', 'W', 'X',
'Y', 'Z', 'a', 'b', 'c', 'd',
'e', 'f', 'g', 'h', 'i', 'j',
'k', 'l', 'm', 'n', 'o', 'p',
'q', 'r', 's', 't', 'u', 'v',
'w', 'x', 'y', 'z'};
char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
'T', 'U', 'V', 'W', 'X', 'Y',
'Z', 'a', 'b', 'c', 'd', 'E', 
'F', 'G', 'H', 'I', 'J', 'K', 
'L', 'M', 'n', 'o', 'P', 'q',
'r', 's', 't', 'u', 'v', 'w',
'x', 'y', 'z', 'a', 'b', 'c',
'd', 'e', 'f', 'g', 'h', 'i',
'j', 'k', 'l', 'm'};
while (str[++index1])
{
for (index2 = 0; index2 < 52; index2++)
{
if (str[index1] == alphabet[index2])
{
str[index1] = rot13key[index2];
break;
}
}
}
return (str);
}