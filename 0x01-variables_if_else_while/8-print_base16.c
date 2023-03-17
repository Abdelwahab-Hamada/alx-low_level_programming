#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
		putchar(n);
	for (n = 97 ; n < 103 ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
