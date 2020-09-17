#include "io.h"
#include <stdio.h>

void clear_input(void)
{
	while ((getchar()) != '\n');
}

char * get_string_input(char *input_ptr)
{
	input_ptr = fgets(input_ptr, MAXCHAR + EXTRACHAR, stdin);
	clear_input();
	return input_ptr;
}

int get_integer_input(void)
{
	int value;
	scanf("%i",&value);
	clear_input();
	return value;
}

double get_double_input(void)
{
	double value;
	scanf("%lf", &value);
	clear_input();
	return value;
}