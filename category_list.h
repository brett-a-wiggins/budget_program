#include "category.h"

struct category_list{
	struct category cat;
	struct category_list *next_node;
};

struct category_list *first_cat_node;
struct category_list *current_cat_node;
struct category_list *new_cat_node;

struct category_list *initialise_list(struct category_list *);
struct category_list *create_new_list(struct category_list *);
struct category_list *add_to_category_list(struct category_list *);
delete_from_category_list();
find_in_category_list();
edit_category();
int print_category_list(struct category_list *);