#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - append to file
 * @filename: path to file
 * @text_content: content
 * Return: chars read
 */

int create_file(const char *filename, char *text_content)
{
	int ot;
	ssize_t w;
	int size;
	char *mem;

	if (!filename)
	{
		return (-1);
	}
	ot = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (ot == -1)
		return (-1);
	if (!text_content)
	{
		close(ot);
		return (1);
	}
	size = _strlen(text_content);
	mem = malloc(sizeof(char) * size);
	if (!mem)
	{
		close(ot);
		return (-1);
	}
	w = write(ot, text_content, size);
	if (w == -1)
	{
		close(ot);
		free(mem);
		return (-1);
	}
	close(ot);
	free(mem);
	return (1);
}

/**
 * _strlen - len
 * @s: is a pointer to a char
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
