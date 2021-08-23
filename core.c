#include "holberton.h"

int main(void)
{
	int ret;

	ret = shellcore();

	return (ret);
}

int shellcore(void)
{
	char *line = NULL, *prompt = "($) ";
	char **args = NULL;
	int stat = 0, cont[] = {1, 0}, i = 0;
	size_t len = 0;

	while (cont[0])
	{
		_puts(prompt);
		printf("ATTEMPT #%i\n", i);
		/*gets input*/
		getline(&line, &len, stdin);
		/*segments input*/
		/*printf("%s\n", line);*/
		args = linecut(line);
		/*func to take care of builtins*/
		stat = com_execute(args);
		printf("TEST2\n");
		i++;
		if (line != NULL)
		{
			printf("free%s\n", line);
			free(line);
		}

		if (args != NULL)
		{
			/*printf("free%s\n", *(args));*/
			free(args);
		}
		args = NULL;
		line = NULL;
	}
	return (stat);
}

char **linecut(char *line)
{
	char **args = NULL;
	int i = 0, size = 1;

	do {
		if (args == NULL)
		{
			args = malloc(sizeof(char **) * size);
			if (args == NULL)
				return (NULL);
			args[i] = strtok(line, " \n\t");
		}
		else
		{
			args = _realloc(args, sizeof(char **) * (size - 1), sizeof(char **) * size);
			if (args == NULL)
				return(NULL);
			args[i] = strtok(NULL, " \n\t");
		}
		i++, size++;
	} while (args[i - 1] != NULL);

	return (args);
}

/*
   int line_read(void)
   {

   }

   char **_strtok(char *imt)
   {

   }
 */

int blt_execute(char **args)
{
	int i = 0, stat = -1;
	builtin_t builts[] = {
		{"exit", builtin_exit},
		{NULL, NULL},
	};
printf("TEST\n");
	while (builts[i].builtin != NULL)
	{
		if (!(_strcmp(args[0], builts[i].prog)))
		{
			stat = (builts[i].builtin)(args);
			break;
		}
	}

	return (stat);
}

int com_execute(char **arg)
{
	pid_t pcs;
	int stat = 0;

	stat = blt_execute(arg)
		if (stat < 0)
		{

			pcs = fork();
			if (!pcs)
			{
				stat = execve(arg[0], arg, NULL);
				/*if (stat == -1)
				  perror("error with execve\n");*/
				free(arg[0]);
				free(arg);
				exit(stat);
			}
			/*else if (pcs < 0)
			  perror("error forking\n");*/
			else
			{
				do {
					waitpid(pcs, &stat, WUNTRACED);
				} while (!WIFEXITED(stat) && !WIFSIGNALED(stat));
			}
		}
	return (stat);
}
