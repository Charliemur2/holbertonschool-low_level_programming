#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all number
 * @separator: " ,"
 * @n: ammount of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator != '\0')
	{
		va_start(nums, n);
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d\n", va_arg(nums, unsigned int));
			}
			else
			printf("%d%s", va_arg(nums, unsigned int), separator);
		}
	}
}
