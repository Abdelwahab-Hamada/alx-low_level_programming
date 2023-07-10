#include "main.h"

/**
  * create_file - creates a file
  * @filename: const char input
  * @text_content: char input
  * Return: 1 | -1
  */
int create_file(const char *filename, char *text_content)
{
	int file, rd, wr;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (rd = 0; *(text_content + rd);)
			rd++;

		wr = write(file, text_content, rd);
		if (wr != rd)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
