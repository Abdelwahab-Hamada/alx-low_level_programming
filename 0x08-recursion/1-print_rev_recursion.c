#include"main.h"
/**
 * _print_rev_recursion - main
 * @s: input
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
}
