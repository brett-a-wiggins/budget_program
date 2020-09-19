#include "expense_list.h"
#include <stdlib.h>
#include <stdio.h>

struct expense_list *create_new_expense_list(struct expense_list *new_list)
{
	if(new_list == NULL)
	{
		new_list = (struct expense_list *)malloc(sizeof(struct expense_list));
		return new_list;
	}
	else
	{
		free(new_list);
		new_list = (struct expense_list *)malloc(sizeof(struct expense_list));
		return new_list;
	}
}

struct expense_list *add_to_expense_list(struct expense *new_expense)
{
	current_exp_node = first_exp_node;

	while(current_exp_node->next_node)
		current_exp_node = current_exp_node->next_node;
	current_exp_node->exp = new_expense;
	return current_exp_node;
}

void print_expense_list(struct expense_list *exp_list)
{
	while(exp_list->next_node)
	{
		print_expense(exp_list->exp);
		exp_list = exp_list->next_node;
	}
}