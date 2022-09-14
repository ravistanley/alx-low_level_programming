#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define n 4000000

/**
 * main - print fibonacci numbers
 *
 * Return: Always return 0
 */

int main(void)
{
	unsigned long num1, num2, num3;
	unsigned long result;

	result = 0;
	num1 = 1;
	num2 = 2;

	while (num1 <= n)
	{
		if (num1 % 2 == 0)
		{
			result += num1;
		}
		num3 = num2;
		num2 = num1 + num2;
		num1 = num3;
	}
	printf("%lu\n", result);
	return (0);
}
