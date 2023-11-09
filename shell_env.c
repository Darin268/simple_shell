#include "shell.h"

/**
 * shell_env - to get the environment variables
 * @env: environment variables
 *
 * Return: to pathfd
 */

char **shell_env(char **env)
{
char *path = _getenv("PATH", env);
char **pathfd = get_path(path, ENVDELIM);

return (pathfd);
}
