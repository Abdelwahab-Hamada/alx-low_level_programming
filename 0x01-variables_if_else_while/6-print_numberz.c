#include <stdio.h>
/**
 * main - entry point
 *
 * Return:always return 0
 *
 */
int main(void)
{
	int n = 0;

	for (; n < 10 ; n++)
		putchar("" + n);
	putchar ('\n');
	return (0);
}
