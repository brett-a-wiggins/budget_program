#ifndef IO_H
#define IO_H

#define MAXCHAR 100
#define EXTRACHAR 2

char * get_string_input(char *);
int get_integer_input(void);
double get_double_input(void);
void clear_input(void);
char *convert_to_uppercase(char *);

#endif