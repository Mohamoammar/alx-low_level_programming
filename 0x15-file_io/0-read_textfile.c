#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read Text File Print To STDOUT.
 * @filename: Text File Being Read
 * @letters: Number Of Letters To Be Read
 * Return: w- actual Number Of Bytes Read And printed
 *        0 when Function Fails Or Filename Is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

