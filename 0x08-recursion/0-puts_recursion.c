#include"main.h"
/**
 * _puts_recursion - main
 * @s: input
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_puchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
