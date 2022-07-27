#include "main.h"

/**
 * _isalpha - returns 1 if letter and 0 otherwise
 * @c: takes in a character
 * Return: return 0 for other and 1 for alphabets
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);

	}
}
