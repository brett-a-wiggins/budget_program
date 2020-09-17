#include "category.h"

struct category_list{
	struct category cat;
	struct category_list *next_node;
};

struct category_list *first_node;
struct category_list *current_node;
struct category_list *new_node;

add_to_category_list();
delete_from_category_list();
find_in_category_list();
edit_category();
print_category();
print_category_list();