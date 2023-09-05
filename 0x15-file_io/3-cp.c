#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @f: The Name Of The File Buffer Is Storing chars for.
 *
 * Return: A pointer to the newly-allocated Buffer.
 */
char *create_buffer(char *f)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @ft: The File Descriptor To Be closed.
 */
void close_file(int ft)
{
	int c;

	c = close(ft);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close ft %d\n", ft);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @arg: The Number Of Arguments supplied to the program.
 * @arg: An Array Of Pointers To The Arguments.
 *
 * Return: 0 on Success.
 *
 * Description: If The Argument Count Is incorrect - exit code 97.
 * If file_from does Not Exist Or Cannot Be read - exit code 98.
 * If file_to cannot Be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int arg, char *arg[])
{
	int from, to, r, w;
	char *buffer;

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(arg[2]);
	from = open(arg[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", arg[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", arg[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(arg[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

