#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: return to zero
 */

int main(int argc, char *argv[])

{
int index, multiplication;
multiplication = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (index = 1; index < argc; index++)
{
multiplication = multiplication * atoi(argv[index]);
}
printf("%d\n", multiplication);
return (0);
}
