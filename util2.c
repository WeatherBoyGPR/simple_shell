#include "holberton.h"

/**
 * _puts - will print a string as is
 * @str: string to print
 *
 * Return: number of characters printed
 */
int _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * _strcmp - will compare two strings
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: the result of the comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int n = 0;

	for (i = 0; !n; i++)
	{
		n = *(s1 + i) - *(s2 + i);
		if (*(s1 + i) == '\0' && *(s2 + i) == '\0')
			break;
	}

	return (n);
}

