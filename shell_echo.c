#include "shell.h"

/**
 * print_echo - to print echo
 * @args: arguments to print
 *
 * Return: 0 if success and -1 if NULL
 */

int print_echo(char **args)
{
pid_t pid;
int status;

pid = fork();
if (pid == 0)
{
if (execve("/bin/echo", args, environ) == -1)
{
return (-1);
}
exit(EXIT_FAILURE);
}
else if (pid < 0)
{
return (-1);
}
else
{
wait(&status);
}
return (1);

/**
 * shell_echo - to execute echo
 * @args: arguments
 *
 * Return: to echo executed
 */

int shell_echo(char **args)
{
char *path;
unsigned int pid = getppid();
int st = 0;

if (_strncmp(args[1], "$?", 2) == 0)
{
_putsint(st);
write(STDOUT_FILENO, "\n", 2);
}
else if (_strncmp(args[1], "$$", 2) == 0)
{
print_num(pid);
write(STDOUT_FILENO, "\n", 2);
}
else if (_strncmp(args[1], "PATH", 5) == 0)
{
path = _getenv("PATH", NULL);
_puts(path);
write(STDOUT_FILENO, "\n", 2);
free(path);
}

else
return (print_echo(args));

return (1);
}
