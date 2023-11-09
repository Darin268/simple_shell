#include "shell.h"

/**
 * shell_cd - to change the working directory
 * @args: arguments
 *
 * Return: always 1 success
 */

int shell_cd(char **args)
{
int x = -1;
char cwd[PATH_MAX];

if (args[1] == NULL)
{
x = chdir(getenv("HOME"));
}
else if (_strcmp(args[1], "-") == 0)
{
x = chdir(getenv("1STPWD"));
}
else
x = chdir(args[1]);

if (x == -1)
{
perror("Error");
return (-1);
}
else if (x != -1)
{
getcwd(cwd, sizeof(cwd));
setenv("1STPWD", getenv("PWD"), 1);
setenv("PWD", cwd, 1);
}
return (0);
}
