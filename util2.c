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
