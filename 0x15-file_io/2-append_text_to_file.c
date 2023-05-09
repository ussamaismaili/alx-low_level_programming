#include "main.h"
/**
 * append_text_to_file - A function that creates a file and append text.
 * @filename:	The type char filename pointer of FD.
 * @text_content: The type char pointer of char.
 * Return: -1 if NULL in FN and  1 on sucess.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int f_out;
	int x;

	file = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (file == -1)
	return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + x) != '\0')
		x++;
	f_out = write(file, text_content, x);
	if (f_out == -1)
		return (-1);
	return (1);
}
