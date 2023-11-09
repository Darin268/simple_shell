#include "shell.h"
/**
 * sig_handler - handle ctrl_c
 * @n: taked in int from signal
 */
void sig_handler(int n)
{
(void)n;
write(STDOUT_FILENO, "\n$ ", 3);
}
