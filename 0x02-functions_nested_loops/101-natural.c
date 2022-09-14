#include "main.h"
#include <stdio.h>
/**
 * main - increases and decreases until 98
 *
 * Return: Always 0
 */

int main(void)
{
	int i, result;

	i = 0;
	result = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
		i++;
	}

	printf("%d\n", result);
	return (0);
}
