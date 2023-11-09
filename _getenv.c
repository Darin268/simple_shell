#include "shell.h"

/**
 * _getenv - get the value of an environment
 * @name: name of the environment variable
 * @env: environment variable
 *
 * Return: env with matching path
 */

char *_getenv(const char *name, char **env)
{
int i = 0, j = 0, cmp = 0;

for (; env[i] != NULL; i++)
{
for (; env[i][j] != '='; j++)
{
cmp = _strcmp((char *)name, env[i]);
if (cmp == 0)
{
return (env[i]);
}
break;
}
}
return (env[i]);
}
