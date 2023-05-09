#include "main.h"
/**
 * create_file - creates a file with the specified name
 *
 * and writes the specified text to it
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, len = 0, res = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		res = write(f, text_content, len);
		if (res == -1 || res != len)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);

}
