#include <stdio.h>

/**
 * main - printing to the standard error
 * return: 1 is the new return
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
