#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <limits.h>

#define PROMPT "$ "
#define WAY "\033["
#define DEF "0m"
#define BLK "30m"
#define RED "31m"
#define GRN "32m"
#define YLW "33m"
#define BLU "34m"
#define MAG "35m"
#define CYN "36m"
#define WHI "37m"
#define B "1;"
#define BRAND "WAY B CYN"
#define RESET "WAY DEF"



/*delimiter */
#define ENVDELIM ":="
extern char **environ;
/* lifetime cicle */
char *get_line(void);
char **tokenizer(char *line);
char **shell_env(char **env);
char *_getenv(const char *name, char **env);
char **get_path(char *path, char *envdelim);
int execute(char **args, char **paths);
int run_cmd(char **args, char **pathfd);

/* child processes */
int exe_file(char **args, char **paths);
int run_cmd(char **args, char **paths);

/* BUILT-INS */
int shell_cd(char **args);
int shell_help(char **args);
int shell_exit(char **args);
int shell_echo(char **args);
int print_echo(char **args);
/* string functions */
char *_strcat(char *str1, char *str2);
int _puts(char *string);
int _putchar(char c);
int word_count(char *str);
int _strlen(char *str);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _delim_count(char *str, char delim);
int _atoi(const char *s);
char *_strchr(const char *s, int c);
void print_num(unsigned int n);
int _strncmp(const char *s1, const char *s2, size_t n);
void _putsint(int n);
int _isalpha(int c);
/* custom functions */
char **_realloc(char **ptr, size_t *size);
ssize_t _getline(char **line, size_t *n, FILE *stream);
char *_strtok(char *str, const char *delim);
unsigned int check_delim(char c, const char *str);
/* helper functions */
void sig_handler(int n);

#endif
