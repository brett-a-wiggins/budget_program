#include "expense_list.h"
#include <stdlib.h>
#include <stdio.h>
#include "io.h"
#include <string.h>

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

void destroy_expense_list(struct expense_list *exp_list)
{
	printf("Destroying List...\n");
	free(exp_list);
	printf("Done.\n");
}

struct expense *find_in_expense_list(struct expense *exp)
{
	int selection = 0;
	struct expense *exp_to_return = (struct expense *)malloc(sizeof(struct expense));
	printf("What do you wish to find?\n");
	printf("1. - search by Expense name.\n");
	printf("2. - search by Expense category.\n");
	printf("3. - search by Expense description.\n");
	printf("4. - search by Expense date.\n");
	printf("Your selection: ");
	selection = get_integer_input();
	switch(selection)
	{	case 1:
			exp_to_return = search_exp_name(exp);
			break;
		case 2:
			exp_to_return = search_exp_category(exp);
			break;
		case 3:
			exp_to_return = search_exp_description(exp);
			break;
		case 4:
			exp_to_return = search_exp_date(exp);
			break;
		default:
			printf("Invalid Selection!\n");
			return NULL;
	}
	return exp_to_return;
	
}

struct expense * search_exp_name(struct expense *exp)
{
	current_exp_node = first_exp_node;
	while(current_exp_node->next_node)
	{
		if(strcmp(current_exp_node->exp->expense_name,exp->expense_name) != 0)
		{
			printf("%s Not Found\n", exp->expense_name);
		}
		else
		{
			printf("Found: %s\n", exp->expense_name);
		}
	}
	return current_exp_node->exp;
}
struct expense * search_exp_category(struct expense *exp)
{

}
struct expense * search_exp_description(struct expense *exp)
{

}
struct expense * search_exp_date(struct expense *exp)
{

}

void delete_from_expense_list(struct expense *exp)
{

}