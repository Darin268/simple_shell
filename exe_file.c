#include "shell.h"

/**
 * exe_file - Entry point
 * @args: pointer of arguments
 * @paths: string of path
 *
 * Return: always 1 to continue the loop
 */

int exe_file(char **args, char **paths)
{
pid_t pid;
int status;
pid = fork();

if (pid == 0)
{
run_cmd(args, paths);
}
if (args)
free(args);

if (pid < 0)
{
perror("Error");
}
else
{
wait(&status);
}
return (1);
}
