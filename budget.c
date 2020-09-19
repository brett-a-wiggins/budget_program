#include <stdio.h>
#include <stdlib.h>
#include "expense.h"
#include "bank_account.h"
#include "expense_list.h"
#include "category_list.h"
#include "budget.h"

int main(void)
{	

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

	
	struct expense *new_expense = (struct expense *)malloc(sizeof(struct expense));
	
	new_expense(new_expense);

	print_expense(new_expense);
	

	
	return EXIT_SUCCESS;
}

void print_menu(void)
{

}
