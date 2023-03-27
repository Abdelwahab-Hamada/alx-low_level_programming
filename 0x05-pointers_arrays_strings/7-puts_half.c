#include"main.h"
#include "2-strlen.c"
/**
 * puts_half - main
 * @str: input
 */
void puts_half(char *str)
{
	int index;
	int oE = 0;

	if (_strlen(str) % 2 != 0)
	{
		oE += 1;
	}
	for (index = (_strlen(str) + oE) / 2 ; index < _strlen(str) ; index++)
		_putchar(*(str + index));
	_putchar('\n');
}
