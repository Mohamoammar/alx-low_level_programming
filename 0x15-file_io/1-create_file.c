#include "main.h"

/**
 * create_file - Creates A File.
 * @filen: a Pointer To The Name Of The File To Create.
 * @text_content: A Pointer To A String To Write To The File.
 *
 * Return: If The Function Fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filen, char *text_content)
{
	int fd, w, len = 0;

	if (filen == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filen, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}

