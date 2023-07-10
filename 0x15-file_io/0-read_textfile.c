#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX standard output
  * @filename: const char input
  * @letters: size_t letters
  * Return: 0 | count written letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fi, re, wr;
	char *buf;

	if (!filename || letters == 0)
		return (0);
	fi = open(filename, O_RDONLY);
	if (fi < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fi);
		return (0);
	}
	re = read(fi, buf, letters);
	close(fi);
	if (re < 0)
	{
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, re);
	if (wr <= 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wr);
}


