#include "main.h"
/**
 * puts_half - gives a function that prints half of a string
 * followed by a new line
 * @str: input variable for pointer(str)
 * Return: half of input
 */
void puts_half(char *str)
{
	int len = 0;
	int ctr;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		ctr = len / 2;
	} else
	{
		ctr = (len - 1) / 2;
	}
	while (str[ctr] != '\0')
	{
		_putchar(str[ctr]);
		ctr++;
	}
	_putchar('\n');
}
