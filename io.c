#include "io.h"
#include <stdio.h>
#include <string.h>

void clear_input(void)
{
	while ((getchar()) != '\n');
}

char * get_string_input(char *input_ptr)
{
	input_ptr = fgets(input_ptr, MAXCHAR + EXTRACHAR, stdin);
	
	strtok(input_ptr,"\n");
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

char *convert_to_uppercase(char *string_to_convert)
{
	int i;
	for (i = 0; string_to_convert[i]!='\0'; i++) {
      if(string_to_convert[i] >= 'a' && string_to_convert[i] <= 'z') {
         string_to_convert[i] = string_to_convert[i] -32;
      }
   }
   return string_to_convert;
}