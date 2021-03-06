#include "main.h"

/**
 * helperFunction - sqrt number checker
 * @num: number
 * @f: possible factor of number
 * Return: 1 for prime and 0 for else
 */

int helperFunction(int num, int f)

{
if (f < num)
{
if (num % f == 0)
{
return (0);
}
else
{
return (helperFunction(num, f + 1));
}
}
else
{
return (1);
}
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * @n: number
 * Return: 1 for prime and 0 else
 */

int is_prime_number(int n)

{
if (n <= 1)
{
return (0);
}
else
{
return (helperFunction(n, 2));
}
}
