#include"main.h"
/**
 * print_rev - mian
 * @s: input
 */
void print_rev(char *s)
{
	int index;
	
	for (index = _strlen(s) ; index >= 0 ; index--)
		_putchar(s[index]);
	_putchar('\n');
}
