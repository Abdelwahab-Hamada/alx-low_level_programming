#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n = 48;

	for (n ; n < 58 ; n++)
		putchar(n);
	n = 97;
	for (n ; n < 103 ; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
