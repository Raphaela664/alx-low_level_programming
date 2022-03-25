#include "main.h"

/**
 *reverse_array - reverse an array.
 *@a: array.
 *@n: array's length.
 */

void reverse_array(int *a, int n)
{
	int i, b, tmp;

	b = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[b];
		a[b] = tmp;
		b--;
	}
}
