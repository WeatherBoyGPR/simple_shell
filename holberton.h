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

/*shell files*/
int shellcore(void);
int line_read(void);
char **_strtok(char *imt);
int com_execute(char **arg);
/*PATH*/
char **dir_path(char *cmd);
/*util1 file*/
char *_strdup(char *str);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _putchar(char c);
void rev_string(char *s);
int _strlen(char *s);
#endif
