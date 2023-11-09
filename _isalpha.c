#include "shell.h"
/**
 *  _isalpha - check the code
 *
 * @c: is the character to check
 *
 *  Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
{
return (1);
}
return (0);
}

