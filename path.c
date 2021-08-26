#include "holberton.h"
/**
 * dpath - link to path 
 * @ctl: command to link
 *
 * Return: An array of strings
 */
char **dpath(char *ctl)
{
	printf("%s\n", ctl);
	return (0);
/*	char *path, *tok, *sub_dir, **dir;
	int count = 1, i = 0;

	path = genv("PATH");
	for (; path[i]; i++)
	{
		if (path[i] == ':')
			count++;
	}
	dir = malloc(sizeof(char *) * (count + 1));
	tok = strtok(path, ":");
	for (i = 0; tok != NULL; i++)
	{
		sub_dir = malloc(_strlen(tok) + _strlen(ctl) + 2);
		_strcpy(sub_dir, tok);
		_strcat(sub_dir, "/");
		_strcat(sub_dir, ctl);
		dir[i] = sub_dir;
		tok = strtok(NULL, ":");
	}
	free(path);
	dir[count] = NULL;
	return (dir);*/
}
