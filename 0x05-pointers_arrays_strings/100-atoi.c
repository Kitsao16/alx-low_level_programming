#include "main.h"
/**
 * _atoi - converts string to an integer
 * @s: string to that is converted
 * Return: the integer converted from string
 */
int _atoi(char *s)
{
	int i, y, x, len, f, digit;

	i = 0;
	y = 0;
	x = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (i < len && f == 0)
	{
		if (s[i] == '-')
		{
			++y;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (y % 2)
				digit = -digit;
			x = x * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
	{
		return (0);
	}
	return (x);
}
