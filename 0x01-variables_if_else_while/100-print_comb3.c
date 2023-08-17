#include <stdio.h>

/**
 * main - Prints all the different combinations of two digits
 * using the for loop iteration
 * outer loop iterates the first digit
 * inner loop iterates the second digit of the cobination
 * Return: Always 0
 */

int main(void)
{
	int i;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}

			if (j == 9)
			break;
		}
	}

	putchar('\n');
	return (0);
}
