#include "shell.h"
/**
 * get_path - get the path
 * @path: path pointer
 * @envdelim: to parse pointer
 * Return: paths
 */
char **get_path(char *path, char *envdelim)
{
char *token_d = NULL;
int path_c = _delim_count(path, ':');
char **paths = malloc(sizeof(char *) * (path_c + 2));
int i = 0;
if (!path)
{
free(paths);
perror("Error path");
exit(EXIT_FAILURE);
}
token_d = _strtok(path, envdelim);
while (token_d != NULL)
{
paths[i] = token_d;
token_d = _strtok(NULL, envdelim);
i++;
}
paths[i] = NULL;
path = NULL;
return (paths);
}
