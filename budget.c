#include <stdio.h>
#include <stdlib.h>
#include "expense.h"
#include "bank_account.h"
#include "expense_list.h"
#include "category_list.h"
#include "budget.h"
#include "category.h"
#include "menu.h"
#include "io.h"

int main(void)
{	
	int selection = 0;
	struct budget *new_budget;
	do{
		main_menu();
		selection = get_integer_input();
		switch(selection)
		{
			case 1:
				new_budget = (struct budget *)malloc(sizeof(struct budget));
				new_budget = create_a_new_budget(new_budget);
				break;
			case 2:
				new_budget = load_budget_from_file(new_budget);
				break;
			case 3:
				add_to_budget(new_budget);
				break;
			case 4:
				view_reports(new_budget);
				break;
			case 5:
				search_budget(new_budget);
				break;
			case 6:
				save_budget_to_disk(new_budget);
				break;
			case 7:
				printf("Ending application\n");
				clean_up(new_budget);
				break;
			default: 
				printf("Invalid Selection!\n");
		}
	}while(selection != 6);
	

	

	return EXIT_SUCCESS;
}

void save_budget_to_disk(struct budget *new_budget)
{

}

void search_budget(struct budget *new_budget)
{

}

void add_to_budget(struct budget *new_budget)
{

}

void view_reports(struct budget *new_budget)
{

}

struct budget *create_a_new_budget(struct budget *new_budget)
{

	return NULL;
}

void clean_up(struct budget *existing_budget)
{
	if(existing_budget == NULL)
	{
		printf("Budget is empty. Nothing to do\n");
	}
	else
	{
		printf("Freeing resources.\n");	
	}
	
}

struct budget *load_budget_from_file(struct budget *new_budget)
{
	return NULL;
}