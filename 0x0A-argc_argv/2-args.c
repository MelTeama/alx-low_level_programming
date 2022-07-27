#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument number
 * @argv: argument of array
 * Return: return to zero
 */

int main(int argc, char *argv[])

{
int n;
for (n = 0; n < argc; n++)
{
printf("%s\n", argv[n]);
}
return (0);
}
