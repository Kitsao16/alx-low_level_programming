#include <stdio.h>

/**
 * main - prints numbers from 1 to 100 followed by new line
 * for multiples of three print Fizz instead of number
 * for multiples of five print Buzz
 * but for numbers which are multiples of both three and five
 * print FizzBuzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i == 1)
		{
			printf("%d ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
