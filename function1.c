#include "shell.h"

/**
 * _strlen - custom function to get the length of a string
 * @str: pointer to the string to be measured
 * Return: the length of a string
 */

int _strlen(char *str)
{
int len = 0;

while (*(str + len))
{
len++;
}
return (len);
}


/**
 * _putchar - putchar custom function
 * @c: the characer to print
 * Return: print a char to the stdo
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * _puts - custom function to print a string of chars in stdo
 * @str: pointer to the string to be printed
 * Return: the string to print
 */

int _puts(char *str)
{

int len = 0;

len = _strlen(str);
return (write(STDOUT_FILENO, str, len));
}

/**
 * _strchr - locates a character
 * @s: string
 * @c: char to find
 *
 * Return: to NULL
 */

char *_strchr(const char *s, int c)
{
while (*s != '\0')
{
if (*s == c)
return ((char *)s);
s++;
}
if (c == '\0')
return ((char *)s);

return (NULL);
}
/**
 * _strncmp - to compare between 2 strings
 * @s1: first string
 * @s2: second string
 * @n: character to compare
 *
 * Return: 1 if don't match 0 otherwise
 */

int _strncmp(const char *s1, const char *s2, size_t n)
{
size_t i;

if (s1 == NULL)
return (-1);

for (i = 0; i < n && s2[i]; i++)
{
if (s1[i] != s2[i])
{
return (1);
}
}
return (0);
}

