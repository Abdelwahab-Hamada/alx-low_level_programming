#include "main.h"

/**
  * append_text_to_file - appends text at end of file
  * @filename: const char input
  * @text_content: char input
  * Return: 1 | -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr, len;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; *(text_content + len);)
			len++;
		wr = write(file, text_content, len);
		if (wr == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
