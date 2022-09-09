#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0 (Succes)
 */

int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Enter the value of n:\n");
	scanf("%d", &n);
	if (n>0)
		printf("%d is postive\n", n);

	else if (n<0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
