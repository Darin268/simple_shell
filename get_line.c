#include "shell.h"

/**
 * get_line - read line from input
 * Return: the line entered
 */

char *get_line(void)
{
char *input = NULL;
size_t buffer_size = 0;

if (_getline(&input, &buffer_size, stdin) == -1)
{
free(input);
if (feof(stdin))
{
exit(EXIT_SUCCESS);
}
else
{
perror("error\n");
exit(EXIT_FAILURE);
}
}
return (input);
}
