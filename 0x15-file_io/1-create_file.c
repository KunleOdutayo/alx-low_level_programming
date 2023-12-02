#include "main.h"

/**
 * create_file - Create file.
 * @fileID: A pointer to name of file to create.
 * @text_data: A pointer to string to write file.
 *
 * Return: If function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *fileID, char *text_data)
{
	int fd, w, len = 0;

	if (fileID == NULL)
		return (-1);

	if (text_data != NULL)
	{
		for (len = 0; text_data[len];)
			len++;
	}

	fd = open(fileID, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_data, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
