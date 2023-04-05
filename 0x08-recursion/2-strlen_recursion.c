#include"main.h"
/**
 * _strlen_recursion - main
 * @s:input
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int counter;

	counter = 0;

	if (*s != '\0')
	{
		counter++;
		_strlen_recursion(s + 1);
	}
	else
		return (counter);
}
