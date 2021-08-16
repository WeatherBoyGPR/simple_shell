#include "holberton.h"

/**
 * _strdup - will malloc a space in memory and copy a string to it
 * @str: string to copy
 *
 * Return: a pointer pointing to the created string
 */
char *_strdup(char *str)
{
	int l = 1, i = 0;
	char *cpy;

	if (str == NULL)
		return (NULL);

	while (*(str + l) != '\0')
		l++;

	cpy = malloc((sizeof(char) * l) + 1);
	if (cpy == NULL)
		return (NULL);
	do {
		*(cpy + i) = *(str);
		i++;
		str++;
	} while (*(str - 1) != '\0');

	return (cpy);
}

/**
 * _realloc - will reallocate space in memory
 * @ptr: memory to be reallocated
 * @old_size: size in bytes of original memory
 * @new_size: size in bytes to be allocated
 *
 * Return: pointer to allocated space on success, NULL on failure,
 * ptr on no change
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;
	char *accessin, *accessout;
	unsigned int i;

	if (!new_size && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	res = malloc(new_size);
	if (!res)
		return (NULL);
	accessin = ptr;
	accessout = res;

	if (ptr)
	{
		for (i = 0; i < old_size && i < new_size; i++)
			*(accessout + i) = *(accessin + i);

		free(ptr);
	}

	return (res);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * rev_string - will reverse a string
 * @s: the string to be reversed
 *
 * Return: doesn't
 */
void rev_string(char *s)
{
	char buf;
	int i;
	int len;

	for (len = 0; s[len] != '\0'; len++)
		continue;

	len--;

	for (i = 0; i <= len ; i++)
	{
		buf = s[len];
		s[len] = s[i];
		s[i] = buf;
		len--;
	}
}

/**
 * _strlen - will find the length of the string
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	if (*s)
	{
		while (*(s + i) != '\0')
			i++;
	}

	return (i);
}
