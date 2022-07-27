#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string pointer
 * Return: null if fails or pointer to duplicate on success
 */

char *_strdup(char *str)

{
char *nstr;
unsigned int len, i;
/* check if str is null */
if (str == NULL)
{
return (NULL);
}
len = 0;
while (str[len] != '\0')
{
len++;
}
nstr = malloc(sizeof(char) * (len + 1));
if (nstr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
nstr[i] = str[i];
}
nstr[len] = '\0';
return (nstr);
}
