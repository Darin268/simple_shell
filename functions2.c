#include "shell.h"
/**
 * _strcat - concatenate two strings (dest + src)
 * @s1: the string to concatenate src
 * @s2: initial string
 * Return: the final and concatenated string
 */
char *_strcat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0, i = 0;
	char *final_str = NULL;

	if (s1)
	len1 = _strlen(s1);
	if (s2)
		len2 = _strlen(s2);

	final_str = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; i < len1; i++)
		final_str[i] = s1[i];
	for (; i < len1 + len2; i++)
		final_str[i] = s2[i - len1];

	final_str[i] = '\0'; /* add null terminator */
	return (final_str);
}

/**
 * _strcmp - compares string 1 with string 2
 * Description: compares two strings
 * Return: 0 if equal or not 0 if are different
 * @s1: first string
 * @s2: second string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
			}
			s1++;
			s2++;
			}
			return (0);
			}
/**
 * _strcpy - copy the string
 * Description: the string pointed to a buffer
 * @dest: the buffer in where copy the string
 * @src: the string to be copied
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len] != '\0')
	{
		len++;
		}
		for (i = 0; i <= len; i++)
		{
			dest[i] = src[i];
			}
return (dest);
}
/**
 * print_num -Print Unsigned Int Putchar
 * @n: Unisigned Integer
 * Return: Void
 */
void print_num(unsigned int n)
{
unsigned int x = n;
if ((x / 10) > 0)
print_num(x / 10);

_putchar(x % 10 + '0');
}
/**
 * _putsint -Print Number Putchar
 * @n:Integer
 * Return: void
 */
void _putsint(int n)
{
unsigned int x = n;

if (n < 0)
{
_putchar('-');
x = -x;
}
if ((x / 10) > 0)
print_num(x / 10);

_putchar(x % 10 + '0');
}
