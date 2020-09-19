#include "category.h"
#include "io.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_category(struct category *cat)
{
	if(cat != NULL)
		printf("%s\n",cat->cat_name);
	else
	{
		printf("Value is NULL\n");
	}
}



struct category *create_new_category(struct category *cat)
{	
	cat = (struct category *)malloc(sizeof(struct category));
	char *new_cat_name;
	if(cat == NULL)
	{
		printf("Error allocating memory!\n");
		return NULL;
	}
	printf("Enter New Category Name: ");
	new_cat_name = get_string_input(new_cat_name);
	strcpy(cat->cat_name, new_cat_name);

	return cat;
}
