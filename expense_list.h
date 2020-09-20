#ifndef EXPENSE_LIST_H
#define EXPENSE_LIST_H
#include "expense.h"

struct expense_list{
	
	struct expense *exp;
	struct expense_list *next_node;
};

struct expense_list *first_exp_node;
struct expense_list *current_exp_node;
struct expense_list *new_exp_node;

struct expense_list *create_new_expense_list(struct expense_list *);
struct expense_list *add_to_expense_list(struct expense *);
void print_expense_list(struct expense_list *);
void destroy_expense_list(struct expense_list *);

void delete_from_expense_list(struct expense *);

struct expense *find_in_expense_list(struct expense *);


struct expense * search_exp_name(struct expense *);
struct expense * search_exp_category(struct expense *);
struct expense * search_exp_description(struct expense *);
struct expense * search_exp_date(struct expense *);

#endif