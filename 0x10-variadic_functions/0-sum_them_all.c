#include "variadic_functions.h"
/**
 * sum_them_all - sum of all its parameters.
 *@n: num
 * Return: Sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	double sum = 0;
	unsigned int i;

	/* initialize valist for num number of arguments */
	va_start(num, n);

	if (n == 0)
	{
		return (0);
	}

	/* access all the arguments assigned to valist */
	i = 0;
	while (i < n)
	{
		sum += va_arg(num, int);
		i++;
	}

	/* clean memory reserved for valist */
	va_end(num);

	return (sum);
}
