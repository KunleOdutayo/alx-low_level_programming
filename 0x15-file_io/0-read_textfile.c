#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @fileID: text file being read
 * @alphabets: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or fileID is NULL.
 */
ssize_t read_textfile(const char *fileID, size_t alphabets)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(fileID, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * alphabets);
	t = read(fd, buf, alphabets);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
