#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int count;

	count = 0;
	while (count < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}

	count++;
	_putchar('\n');
	}
}