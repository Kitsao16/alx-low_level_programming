#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: gives string in reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int ctr = 0;
	int i;

	while (s[ctr] != '\0')
	ctr++;
	for (i = 0; i < ctr; i++)
	{
		ctr--;
		rev = s[i];
		s[i] = s[ctr];
		s[ctr] = rev;
	}
}
