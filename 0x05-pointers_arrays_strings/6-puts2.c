#include"main.h"
#include "2-strlen.c"
/**
 * puts2 - main
 * @str: input
 */
void puts2(char *str)
{
	int index;

	for (index = 0 ; index < _strlen(str) ; index += 2)
		_putchar(*(str + index));
	_putchar('\n');
}
