#include "shell.h"
/**
 * main - data entry
 * @argc: number of arguments
 * @argv: argument vector
 * @env: environment variables
 * Return: always 0
 */
int main (int argc, char **argv, char **env)
{
char *line = NULL, **args = NULL;
int status = 1, sh_interactive = 0;
char **paths = NULL;
paths = shell_env(env);
(void)argc;
(void)argv;
sh_interactive = (isatty(STDIN_FILENO));
while (status)
{
if (sh_interactive == 1)
{
write(STDOUT_FILENO, "cisfun$ ", 8);
}
else
{
status = 0;
}
signal(SIGINT, sig_handler);
line = get_line();
args = tokenizer(line);
status = execute(args, paths);
if (line)
free(line);
if (sh_interactive == 0)
free(paths);
}
free(paths);
return (0);
}
