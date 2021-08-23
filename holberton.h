#ifndef GREY_MATTER
#define GREY_MATTER

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/resource.h>
#include <sys/wait.h>

typedef struct builtin
{
	char *prog;
	int (*builtin)(char **args);
} builtin_t;

/*shell files*/
int shellcore(void);
int line_read(void);
char **linecut(char *line);
int blt_execute(char **args);
int com_execute(char **arg);

/*util1 file*/
char *_strdup(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void rev_string(char *s);
int _strlen(char *s);

/*util2 file*/
int _puts(char *str);
int _strcmp(char *s1, char *s2);

/*builtin file*/
int builtin_exit(char **args);
#endif
