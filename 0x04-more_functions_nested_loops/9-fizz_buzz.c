#include <stdio.h>

/**
 * main - FizzBuzz program
 * Return: always 0
 */

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n == 100)
		{
			printf("Buzz");
		}
		else if (n % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", n);
		}
		n++;
	}
	printf("\n");
	return (0);
}
