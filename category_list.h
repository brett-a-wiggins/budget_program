#ifndef CATEGORY_LIST_H
#define CATEGORY_LIST_H

#include "category.h"
#include <stdlib.h>


struct category_list{
	struct category *cat;
	struct category_list *next_node;
};

struct category_list *first_cat_node;
struct category_list *current_cat_node;
struct category_list *new_cat_node;

struct category_list *initialise_list(struct category_list *);
struct category_list *create_new_list(struct category_list *);
struct category_list *add_to_category_list(struct category_list *);
int delete_from_category_list(struct category *);
int find_in_category_list(struct category *);
int edit_category(struct category *);
int print_category_list(struct category_list *);

#endif