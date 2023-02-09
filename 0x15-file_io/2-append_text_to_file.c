#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - apends text to file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int go;
	ssize_t w;
	int size;

	if (!filename)
		return (-1);

	go = open(filename, O_WRONLY | O_APPEND);

	if (go == -1)
		return (-1);

	if (!text_content)
	{
		close(go);
		return (1);
	}

	size = _strlen(text_content);
	w = write(go, text_content, size);

	if (w == -1)
	{
		close(go);
		return (-1);
	}
	close(go);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int j = 0;

	while (*(s + j) != '\0')
	{
		j++;
	}

	return (j);
}

