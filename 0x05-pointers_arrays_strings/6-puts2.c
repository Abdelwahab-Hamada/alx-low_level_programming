#include"main.h"
/**
 * _puts2 - main
 * @str: input
 */
void _puts2(char *str)
{
	int index;

	for (index = 0 ; str[index] != '\0' ; index += 2)
		_putchar(*(str + index));
	_putchar('\n');
}
