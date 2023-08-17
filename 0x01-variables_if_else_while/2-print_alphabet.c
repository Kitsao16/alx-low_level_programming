#include <stdio.h>
/**
 * main - Prints the lowercase alphabets on one line
 *
 * Return: Always 0
 */
int main(void)
{
	char ltr[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(ltr[i]);
	}
	putchar('\n');
	return (0);
}
