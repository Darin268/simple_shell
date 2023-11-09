#include "shell.h"
/**
 * execute - execute builtins and commands
 * @args: pointer to string with arguments to execute
 * @paths: string of paths
 * Return: value for loop, if 1 the loop will continue
 */
int execute(char **args, char **paths)
{
unsigned long int i = 0;
char *builtin_str[] = {"cd", "help", "exit", "echo", NULL};
int (*builtin_fun[])(char **) = {&shell_cd, &shell_help,
			&shell_exit, &shell_echo};
if (args[0] == NULL)
{
return (1);
}
for (i = 0; builtin_str[i]; i++)
{
if (_strcmp(builtin_str[i], args[0]) == 0)
{
return ((*builtin_fun[i])(args));
}
}
return (exe_file(args, paths));
}
