#ifndef CATEGORY_H
#define CATEGORY_H

struct category{
	char *cat_name;
};

void print_category(struct category *);

struct category * create_new_category(struct category *);

#endif