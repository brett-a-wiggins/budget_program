#include "budget.h"
#include "category_list.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	struct category_list *new_cat_list;

	printf("Testing category list initialisation...\n");
	new_cat_list = initialise_list(new_cat_list);

	printf("Printing contents of list...\n");
	while(new_cat_list->next_node)
	{
		printf("%s\n", new_cat_list->cat.cat_name);
		new_cat_list = new_cat_list->next_node;
	}
	return EXIT_SUCCESS;
}
