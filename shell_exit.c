#include "shell.h"
/**
 * shell_exit - builtin to exit the shell
 * @args: arguments
 * Return: always 0 to finish the loop
 */
int shell_exit(char **args)
{
int st, i = 0;
if (args[1] == NULL)
{
exit(EXIT_FAILURE);
}
while (args[1][i])
{
if (_isalpha(args[1][i++]) != 0)
{
perror("Error");
break;
}
else
{
st = _atoi(args[1]);
exit(st);
}
}
return (0);
}
