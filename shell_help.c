#include "shell.h"
/**
 * shell_help - builtin to help in the standard output
 * @args: arguments
 * Return: always 1
 */
int shell_help(char **args)
{
int i;
char *builtin_str[] = {"cd", "help", "exit", "echo", NULL};
(void)args;
_puts("Simple Shell\n");
_puts("Program name\n");
_puts("This builtin:\n");
for (i = 0; builtin_str[i]; i++)
{
_puts(builtin_str[i]);
_putchar('\n');
}
_puts("use the man command \n");
return (1);
}
