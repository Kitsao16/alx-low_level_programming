#include "main.h"

/**
 * print_number - prints an integer
 * @number: integer to be printed
 */
void print_number(int n)
{
	unsigned int d1;

	if (n < 0)
	{
		d1 = -n;
		_putchar('_');
	} else
	{
		d1 = n;
	}

	if (d1 / 10)
	{
		print_number(d1 / 10);
	}

	_putchar((d1 % 10) + '0');
}
