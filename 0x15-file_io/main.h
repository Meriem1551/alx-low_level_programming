#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
