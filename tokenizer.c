#include "shell.h"
#define TOK_DELIM " \t\r\n\a"
/**
 * tokenizer - break a string in separated tokens
 * @line: line from standard input
 * Return: array of tokens
 */
char **tokenizer(char **line)
{
int bufsize = _delim_count(line, ' '), i = 0;
char **tokens = NULL;
char *token = NULL;
tokens = malloc(sizeof(char *) * (bufsize + 1));
if (!tokens)
{
free(tokens);
perror("allocation error");
exit ("EXIT_FAILURE");
}
token = _strtok(line, TOK_DELIM);
while (token != NULL)
{
if (token[0] == '#')
{
break;
}
tokens[i] = token;
i++;
token = _strtok(NULL, TOK_DELIM);
}
tokens[i] = NULL;
return (tokens);
}
