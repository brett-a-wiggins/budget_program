#include "budget.h"
#include "category_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
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

	find_in_category_list(first_cat_node->cat);

	edit_category(first_cat_node->cat);
	
	print_category_list(new_cat_list);
	return EXIT_SUCCESS;
}
