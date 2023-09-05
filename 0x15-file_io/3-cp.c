#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filen: A Pointer To The Name of the file.
 * @text_cont: The String To add to the end of the file.
 *
 * Return: If The Function fails or filename is NULL - -1.
 *         If the File Does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filen, char *text_cont)
{
	int o, w, len = 0;

	if (filen == NULL)
		return (-1);

	if (text_cont != NULL)
	{
		for (len = 0; text_cont[len];)
			len++;
	}

	o = open(filen, O_WRONLY | O_APPEND);
	w = write(o, text_cont, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

