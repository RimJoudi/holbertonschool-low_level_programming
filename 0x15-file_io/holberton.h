#ifndef HEADR_FILE
#define HEADR_FILE
#include <stdio.h>
#include <stdlib.h>
#include <unisted.h>
#include <sys/types>
#include <sys/stat.h>
#include <fcntl.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
#endif
