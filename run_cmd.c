#include "shell.h"

/**
 * run_cmd - to run the commands
 * @args: arguments
 * @pathfd: is the string
 *
 * Return: always exit_success when done complete
 */

int run_cmd(char **args, char **pathfd)
{
int i = 0;
char *e_cmd = NULL;
for (i = 1; pathfd[i] != NULL; i++)
{
e_cmd = malloc(sizeof(char) * (_strlen(pathfd[i])
+ _strlen(args[0]) + 2));
_strcpy(e_cmd, pathfd[i]);
e_cmd = _strcat(e_cmd, "/");
e_cmd = _strcat(e_cmd, args[0]);
if (access(e_cmd, X_OK) == 0)
{
if (execve(e_cmd, args, NULL) == -1)
{
perror("error");
}
exit(EXIT_FAILURE);
}
free(e_cmd);
}
if (pathfd[i] == NULL)
{
free(pathfd);
if (access(args[0], X_OK) == 0)
{
if (execve(args[0], args, NULL) == -1)
{
perror("error");
}
exit(EXIT_FAILURE);
}
}
exit(EXIT_SUCCESS);
}
