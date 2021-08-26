#include "holberton.h"

/**
 * builtin_XXXXX - will XXXXX shell
 * @args: arguments to process
 *
 * Return:
 */
/*
int builtin_XXXXX(char **args)
{

}
*/
/**
 * builtin_exit - will exit the shell
 * @args: arguments
 * @ex1t: exit param
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
