#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *fileID, size_t alphabet);
int create_file(const char *fileID, char *text_data);
int append_text_to_file(const char *fileID, char *text_data);

#endif
