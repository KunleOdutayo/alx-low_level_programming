#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int _putchar(char c)
int _strlen(char *str)
ssize_t read_textfile(const char *fileID, size_t alphabets);
int create_file(const char *fileID, char *text_content);
int append_text_to_file(const char *fileID, char *text_content);

#endif
