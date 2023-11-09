#include "shell.h"

/**
 * _getline - to get a line from stdin
 * @line: the buffer for the line
 * @n: size of buffer
 * @stream: file that have the input
 *
 * Return: buff size
 */

ssize_t _getline(char **line, size_t *n, FILE *stream)
{
ssize_t read_char = 0;
char *end_line = NULL;

if (line == NULL || n == NULL || stream == NULL)
return (-1);

*n = 128;
*line = malloc(sizeof(char) * (*n));

if (*line == NULL)
return (-1);

while (fgets(*line + read_char, *n - read_char, stream) != NULL)
{
read_char += _strlen(*line + read_char);
end_line = _strchr(*line, '\n');
if (end_line != NULL)
return (read_char);

if (*n - read_char < 128)
{
*n += 128;
*line = realloc(*line, sizeof(char) * (*n));
if (*line == NULL)
return (-1);
}
}
return (-1);
}
