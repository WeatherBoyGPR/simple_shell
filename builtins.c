#include "holberton.h"

/**
 * builtin_exit - will exit the shell
 * @args: arguments
 *
 * Return: nothing
 *
 */
int builtin_exit(char **args, env_t *envi)
{
	free(args[0]);
	free(args);
	if (envi != NULL)
		free_env(envi);
	exit(1);
}
