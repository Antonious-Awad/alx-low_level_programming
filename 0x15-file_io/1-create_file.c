#include "main.h"
#include <strings.h>
#include <fcntl.h>
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 if success, -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t openBuff, writeBuff, len = 0;
	if (!filename)
		return (-1);

	if (text_content)
		len = strlen(text_content);

	openBuff = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writeBuff = write(openBuff, text_content, len);

	if (openBuff == -1 || writeBuff == -1)
		return (-1);

	close(openBuff);
	return (1);
}
