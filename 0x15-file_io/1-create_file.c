#include "main.h"
/**
 * create_file - a Function that creates a file.
 * @filename: the type char filename pointer of FD.
 * @text_content: the type char pointer of char.
 * Return: -1 if incouters NULL in FN and 1 on sucess.
 */
int create_file(const char *filename, char *text_content)
{
	int f_out = 0;
	int  file = 0;
	int  x = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + x) != '\0')
		{
			x++;
		}
		f_out = write(file, text_content, x);
	}
	if (f_out == -1 && f_out != x)
		return (-1);
	return (1);
}
