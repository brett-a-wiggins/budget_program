#include "expense.h"
#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include <string.h>
#include "category.h"


struct expense * new_expense(struct expense *exp)
{
	char *input_expense_name = (char *)malloc(sizeof(char)* 50);
	struct category *new_expense_category = (struct category *) malloc(sizeof(struct category));
	char *expense_description = (char *)malloc(sizeof(char)* 255);
	double expense_amount = 0;
	exp = (struct expense *)malloc(sizeof(struct expense));
	if(exp == NULL)
	{
		printf("Error allocating memory!\n");
		return NULL;
	}
	
	printf("Enter expense name: ");
	get_string_input(input_expense_name);
	strcpy(exp->expense_name, input_expense_name);
	printf("Enter expense category: ");
	get_string_input(new_expense_category->cat_name);
	convert_to_uppercase(new_expense_category->cat_name);
	if(find_in_category_list(new_expense_category))
	{
		printf("Enter expense description: ");
		get_string_input(expense_description);
		printf("Enter expense amount: ");
		expense_amount = get_double_input();
		strcpy(exp->expense_description, expense_description);
		exp->expense_amount = expense_amount;
	}
	else
	{
		printf("Cannot find category: %s\n",new_expense_category->cat_name);
		return NULL;
	}
	return exp;
}

void print_expense(struct expense *exp)
{
	printf("Expense name: %s\n",exp->expense_name);
	printf("Expense date: (to be implemented..)\n");
	printf("Expense category %s\n", exp->expense_category->cat_name);
	printf("Expense description: %s\n", exp->expense_description);
	printf("Expense amount: %lf\n", exp->expense_amount);
}