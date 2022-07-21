#include "main.h"

/**
 * helperFunction - sqrt number checker
 * @num: number
 * @pSqrt: possible sqrt of number
 * Return: sqrt number and -1 for error
 */

int helperFunction(int num, int pSqrt)
{
if ((pSqrt * pSqrt) == num)
{
return (pSqrt);
}
else
{
if ((pSqrt * pSqrt) > num)
return (-1);
else
return (helperFunction(num, pSqrt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: sqrt of n and -1 for error
 */

int _sqrt_recursion(int n)
if (n < 0)
return (-1);
else
return (helperFunction(n, 0));
}
