#include"main.h"
/**
 * _strcat - main
 * @dest: input
 * @src: input
 * Return: char pointer
 */
char *strcat(char *dest, const char *src)
{
	int len = 0, index = 0;

	while (dest[len] != '\0')
	{
		len++;
	}

	while (src[index] != '\0')
	{
		dest[len + index] = src[index];
		index++;
	}
	dest[len + index] = '\0';

	return (dest);

}
