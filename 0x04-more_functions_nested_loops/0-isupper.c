#include "main.h"

/**
 * _isupper -> chck upper case
 * @c: integer
 * Return: some output
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')

		return (1);

	return (0);

	return (c >= 65 && c <= 90);

	return (c >= 'A' && c <= 'Z');
}
