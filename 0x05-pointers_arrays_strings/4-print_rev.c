#include"main.h"
#include "2-strlen.c"
/**
 * print_rev - mian
 * @s: input
 */
void print_rev(char *s)
{
	int index;

	for (index = _strlen(s) - 1 ; index >= 0 ; index--)
		_putchar(s[index]);
	_putchar('\n');
}
