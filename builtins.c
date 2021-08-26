#include "holberton.h"

/**
 * builtin_exit - will exit the shell
 * @args: arguments
 *
 * Return: nothing
 *
 */
int builtin_exit(char **args)
{
	free(args[0]);
	free(args);
	exit(1);
}
