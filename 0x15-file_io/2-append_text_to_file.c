#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: the name of the file
 * @text_content: the text to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, len = 0, res = 0;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

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
