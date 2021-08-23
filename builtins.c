#include "holberton.h"
int _printf(const char *format, ...)
{
	int num;
	va_list box;
	talley_t **tal;
	char *err = "Error : NO FORMAT STRING\n";

	printf_t specs[] = {
		{"c", c_specprint},
		{"s", s_specprint},
		{"%", mod_specprint},
		{"r", r_specprint},
		{"R", R_specprint},
		{"i", di_specprint},
		{"d", di_specprint},
		{"u", di_specprint},
		{"b", b_specprint},
		{"p", p_specprint},
	};
