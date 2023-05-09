#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed,
 * or 0 if there was an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_read, num_written;
	char *buff;
	int f;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
	{
		close(f);
		return (0);
	}
	num_read = read(f, buff, letters);
	if (num_read == -1)
	{
		close(f);
		free(buff);
		return (0);
	}
	num_written = write(STDOUT_FILENO, buff, num_read);
	if ((num_read != num_written) || num_written == -1)
	{
		close(f);
		free(buff);
		return (0);
	}
	close(f);
	free(buff);
	return (num_read);
}
