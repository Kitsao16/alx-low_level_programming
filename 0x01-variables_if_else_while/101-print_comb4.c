#include <stdio.h>

/**
 * main - Prints all possible different combination of three digits
 * the first loop iterates the first digit of the combination
 * second loop iterates the second digit
 * third loop iterates the last digit of the combination
 * Return: Always 0
 */
int main(void)
{
	int i;

	int j;

	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
