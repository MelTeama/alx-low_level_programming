#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: an integer one defined
 * @n: a integer two defined
 * Return: return pointer to @dest
 */

void reverse_array(int *a, int n)

{
int tmp, index;

for (index = n - 1; index > n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
<<<<<<< HEAD

=======
>>>>>>> baf32b56bf400ff895a8d108f95d905037f620de
