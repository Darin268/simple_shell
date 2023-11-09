#include "shell.h"
/**
 * _strtok - string in token
 * @str: string
 * @delim: delimeter
 * Return: pointer
 */
char *_strtok(char *str, const char *delim)
{
static char *t;
static char *n;
unsigned int i;
if (str != NULL)
n = str;
t = n;
if (t == NULL)
return (NULL);
for (i = 0; t[i] != '\0'; i++)
{
if (check_delim(t[i], delim) == 0)
break;
}
if (n[i] == '\0' || n[i] == '#')
{
n = NULL;
return (NULL);
}
t = n + i;
n = t;
for (i = 0; n[i] != '\0'; i++)
{
if (check_delim(n[i], delim) == 1)
break;
}
if (n[i] == '\0')
n = NULL;
else
{
n[i] = '\0';
n = n + i + 1;
if (*n == '\0')
n = NULL;
}
return (t);
}
