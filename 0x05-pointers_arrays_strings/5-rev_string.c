#include"main.h"
#include "2-strlen.c"
/**
 * rev_string - main
 * @s: input
 */
void rev_string(char *s)
{
	int index;
	char tmp;

	for (index = 0 ; index < _strlen(s) / 2 ; index++)
	{
		tmp = s[index];
		s[index] = s[(_strlen(s) - 1) - i];
		s[(_strlen(s) - 1) - i] = tmp;
	}
}
