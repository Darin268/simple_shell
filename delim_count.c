#include "shell.h"
/**
 * _delim_count - count the words without :
 * @str: pointer to the string to count word
 * @delim: delimeter
 * Return: the number of words in string
 */
int _delim_count(char *str, char delim)
{
int i = 0;
int words = 0;
if (str)
{
for (; str[i] != '\0'; i++)
{
if (str[i] == delim)
words++;
}
words++;
}
return (words);
}
