#include "shell.h"
/**
 * check_delim - check chars
 * @c: ti be checked
 * @str: string
 * Return: 0 on success
 */
unsigned int check_delim(char c, const char *str)
{
unsigned int i;
for (i = 0; str[i] != '\0'; i++)
{
if (c == str[i])
return (1);
}
return (0);
}
