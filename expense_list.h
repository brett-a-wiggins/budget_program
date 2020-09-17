#include "expense.h"

struct expense_list{
	
	struct expense exp;
	struct expense_list *next_node;
};

struct expense_list *first_node;
struct expense_list *current_node;
struct expense_list *new_node;

create_new_expense_list();
destroy_expense_list();
add_to_expense_list();
delete_from_expense_list();
find_in_expense_list();
print_expense_list();
