#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>
#define BUFSIZE 1024
void get_magic(Elf64_Ehdr *ehdr, char *fname, int fd);
void get_class(Elf64_Ehdr *ehdr);
void get_class(Elf64_Ehdr *ehdr);
void get_velf(Elf64_Ehdr *ehdr);
void get_osabi(Elf64_Ehdr *ehdr);
void get_vabi(Elf64_Ehdr *ehdr);
void get_type(Elf64_Ehdr *ehdr);
void get_entry(Elf64_Ehdr *ehdr);
void validate(int argc);
void f_close(int f);
int open_file(const char *filename, int flags, mode_t mode);
int copy_file(int fd_from, int fd_to);
void close_file(int fd);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
#endif /* MAIN_H */
