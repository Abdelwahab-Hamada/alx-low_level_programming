#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - reads a text file and prints it to the POSIX standard output
  * @filename: const char input
  * @letters: size_t letters
  * Return: 0 | count written letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_obj, rd, wr;
	char *buf;

	if (!filename || letters == 0)
		return (0);
	file_obj = open(filename, O_RDONLY);
	if (file_obj < 0)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_obj);
		return (0);
	}
	rd = read(file_obj, buf, letters);
	close(file_obj);
	if (rd < 0)
	{
		free(buf);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	if (wr <= 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (wr);
}