#include "main.h"

/* Function prototypes */
int validate_args(int argc);
int open_file(const char *filename, int flags, mode_t mode);
int copy_file(int fd_from, int fd_to);
void close_file(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	validate_args(argc);

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_file(fd_from, fd_to);

	close_file(fd_from);
	close_file(fd_to);

	return (0);
}

/**
 * validate_args - validates the command line arguments
 * @argc: the number of arguments passed to the program
 * Return: 0 on success, or exits with an error code on failure
 */
int validate_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	return (0);
}

/**
 * open_file - opens a file with the specified flags and mode
 * @filename: the name of the file to open
 * @flags: the flags to use when opening the file
 * @mode: the mode to use when creating the file
 * Return: the file descriptor on success,
 * or exits with an error code on failure
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);

	}
	return (fd);
}

/**
 * copy_file - copies the content of one file to another
 * @fd_from: the file descriptor of the file to copy from
 * @fd_to: the file descriptor of the file to copy to
 * Return: 0 on success, or exits with an error code on failure
 */
int copy_file(int fd_from, int fd_to)
{
	ssize_t nread;
	char buf[BUFSIZE];

	while ((nread = read(fd_from, buf, BUFSIZE)) > 0)
	{
		ssize_t nwritten = write(fd_to, buf, nread);
		
		if (nwritten == -1 || nwritten != nread)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		exit(98);
	}
	return (0);
}

/**
 * close_file - closes a file descriptor
 * @fd: the file descriptor to close
 * Return: void
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
