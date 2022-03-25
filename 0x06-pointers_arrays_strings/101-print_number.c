#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int c, b, count;

	if (n < 0)
	{
		_putchar(45);
		c = n * -1;
	}
	else
	{
		c = n;
	}

	b = c;
	count = 1;

	while (b > 9)
	{
		b /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((c / count) % 10) + 48);
	}
}
