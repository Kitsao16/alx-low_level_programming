#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: string with the characters to be traversed
 * Return: the print of the characters
 */
void puts2(char *str)
{
	int len = 0;
	int ctr = 0;
	char *temp = str;
	int i;

	while (*temp != '\0')
	{
		temp++;
		len++;
	}
	ctr = len - 1;
	for (i = 0; i <= ctr; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
