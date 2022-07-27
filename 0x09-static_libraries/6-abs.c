#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: takes in a number
 * Return: 1 for positie and 0 for zero and -1 for negatives
 */

int _abs(int n)

{
	if (n < 0)
		return (n * -1);
	return (n);
}
