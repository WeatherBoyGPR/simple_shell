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

/**
 * struct env_list - acts as a linked list to store the environment in
 * @title: name of environment variable
 * @value: value stored within environment variable
 * @next: next node in environment list
 */
typedef struct env_list
{
	char *title;
	char *value;
	struct env_list *next;
} env_t;

/**
 * struct builtin - ties together builtin names and functions
 * @prog: name of the builtin
 * @builtin: function tied to builtin
 */
typedef struct builtin
{
	char *prog;
	int (*builtin)(char **args, env_t *envi);
} builtin_t;


extern char **environ;


/*shell files*/
int shellcore(void);
int line_read(void);
char **linecut(char *line);
int blt_execute(char **args, env_t *envi);
int com_execute(char **arg, env_t *envi);

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
int builtin_exit(char **args, env_t *envi);

/*envfunc file*/
env_t *genv(void);
char *gval(env_t *head, char *title);
env_t *envt_node_end(env_t **head, const char *str);
void free_env(env_t *head);
void print_env(env_t *envi);

#endif
