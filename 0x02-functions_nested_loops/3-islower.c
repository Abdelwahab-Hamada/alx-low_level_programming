#include"main.h"
/**
 *  _islower - main function
 *
 * @c: input
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
