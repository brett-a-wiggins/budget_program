#include <stdio.h>
#include <stdlib.h>
#include "expense.h"
#include "bank_account.h"
#include "expense_list.h"
#include "category_list.h"
#include "budget.h"
#include "category.h"

int main(void)
{	
	int counter = 0;

	struct bank_account *my_savings_account = (struct bank_account *)malloc(sizeof(struct bank_account));

	struct category_list *new_cat_list = NULL;

	printf("Testing category list initialisation...\n");
	new_cat_list = initialise_list(new_cat_list);

	printf("Printing contents of list...\n");
	print_category_list(new_cat_list);
	printf("\n\n");

	delete_from_category_list(first_cat_node->cat);
	printf("\n\n");
	print_category_list(new_cat_list);
	printf("\n\n");

	
	
	

	

	struct expense_list *new_exp_node = (struct expense_list *)malloc(sizeof(struct expense_list));

	first_exp_node = current_exp_node = new_exp_node;

	new_exp_node = create_new_expense_list(new_exp_node);
	

	

	while(counter < 2)
	{

		struct expense *expense = (struct expense *)malloc(sizeof(struct expense));
		expense = new_expense(expense);
		new_exp_node = add_to_expense_list(expense);
		new_exp_node->next_node = (struct expense_list *)malloc(sizeof(struct expense_list));
		new_exp_node = new_exp_node->next_node;
		counter++;
	}

	printf("\n\n");
	print_expense_list(first_exp_node);
	
	return EXIT_SUCCESS;
}

void print_menu(void)
{

}
