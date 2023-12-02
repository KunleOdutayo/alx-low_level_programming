#include "main.h"

/**
 * append_text_to_file - Append text at end of a file.
 * @fileID: A pointer to file name.
 * @text_data: The string to add to end of file.
 *
 * Return: Iffunction fails or filename is NULL - -1.
 *         If file does not exist user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *fileID, char *text_data)
{
	int o, w, len = 0;

	if (fileID == NULL)
		return (-1);

	if (text_data != NULL)
	{
		for (len = 0; text_data[len];)
			len++;
	}

	o = open(fileID, O_WRONLY | O_APPEND);
	w = write(o, text_data, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
