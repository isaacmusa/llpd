#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing whether number is positive or negative
 * Return: 0 if nothing to print and non-zero if code is okay
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n = 0)
		printf("%d is zero", n);
	else
		printf("%d is positive", n);
	return (0);
}
