#include "expense.h"
#include <stdio.h>
#include <stdlib.h>
#include "io.h"
#include <string.h>

struct expense * new_expense(struct expense *exp)
{
	char *input;
	exp = (struct expense *)malloc(sizeof(struct expense));
	if(exp == NULL)
	{
		printf("Error allocating memory!\n");
		return NULL;
	}
	
	printf("Enter expense name: ");
	input = get_string_input(input);
	clear_input();
	strcpy(exp->expense_name, input);
	
	return exp;
}
void print_expense(struct expense *exp)
{
	printf("Expense name: %s\n",exp->expense_name);
	printf("Expense date: (to be implemented..)\n");
	printf("Expense category %s\n", exp->expense_category.cat_name);
	printf("Expense description: %s\n", exp->expense_description);
	printf("Expense amount: %lf\n", exp->expense_amount);
}