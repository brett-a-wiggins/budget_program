#include "category_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "io.h"

#define RECORDS 52

char *category_array[] = {
	"Apple Music",
	"APPVA Loan",
	"Aussie Vets Coffee CO",
	"Australian Computer Society",
	"Bank Interest",
	"Bizhub Realm",
	"Body Corporate",
	"Books",
	"Brother Shave",
	"Car Loan",
	"Cafe/Coffee/Resteraunts",
	"Car Insurance",
	"Car registration",
	"Car Service/Maintenance",
	"Cash Converters",
	"Cash Withdrawal",
	"Clothing",
	"Computer hardware",
	"Connected Community",
	"Council Rates",
	"Debt agreement",
	"Eastlink Tolls",
	"Electricity",
	"Education",
	"Entertainment",
	"Fines",
	"Fitness",
	"Fuel",
	"Google Play",
	"Groceries",
	"Home and Contents Insurance",
	"Home Maintenance",
	"Home Office",
	"Internet",
	"Internet Hosting",
	"Junk Food",
	"Legal/Tax",
	"Life Insurance",
	"Medication",
	"Misc",
	"Mobile Phones",
	"Mortgage",
	"Netflix",
	"Parking",
	"Resimac offset",
	"Road Side assist",
	"Savings",
	"Skittles",
	"Software",
	"Take away",
	"Toiletries",
	"Water Rates"
};

int edit_category(struct category *cat_to_edit)
{		
	if(cat_to_edit == NULL)
	{
		printf("Errror, category = NULL");
		return -1;
	}
	char *new_name = (char *)malloc(sizeof(char) * 50);
	printf("Enter new category name: ");
	get_string_input(new_name);
	convert_to_uppercase(new_name);
	strcpy(cat_to_edit->cat_name,new_name);
	return 0;

}

int find_in_category_list(struct category *cat_to_find)
{	
	char *key = (char *)malloc(sizeof(char) * 50);
	strcpy(key, cat_to_find->cat_name);
	convert_to_uppercase(key);

	current_cat_node = first_cat_node;
	while(current_cat_node->next_node)
	{
		if(!strcmp(current_cat_node->cat->cat_name,key))
		{
			printf("Found category: %s in list\n",key);
			return 1;
		}
		current_cat_node = current_cat_node->next_node;

	}
	printf("Did not find: %s in list.\n",key);
	return 0;
}

int delete_from_category_list(struct category *cat_to_delete)
{
	char *key = NULL;
	struct category_list *previous_node = (struct category_list *)malloc(sizeof(struct category_list));
	key = (char *)malloc(sizeof(char)*50);
	if(cat_to_delete == NULL)
	{
		printf("Error! category is NULL!\n");
		return -1;
	}
	else
	{
		strcpy(key,cat_to_delete->cat_name);
		convert_to_uppercase(key);
		current_cat_node = first_cat_node;
		while(current_cat_node)
		{
			if(!strcmp(key,current_cat_node->cat->cat_name))
			{
				if(current_cat_node == first_cat_node)
					first_cat_node = current_cat_node->next_node;
				else
					previous_node->next_node = current_cat_node->next_node;
				free(current_cat_node);
				printf("Category: %s deleted\n",key);
				return 1;
				
			}else
			{
				previous_node = current_cat_node;
				current_cat_node = current_cat_node->next_node;
			}
			
		}
		
	}
}

struct category_list *initialise_list(struct category_list *cat_list)
{
	int index = 0;
	char *new_name = NULL;
	new_cat_node = (struct category_list *)malloc(sizeof(struct category_list));
	

	new_cat_node->cat = (struct category *)malloc(sizeof(struct category));
	
	new_cat_node->cat->cat_name = (char *)malloc(sizeof(char) * 50);

	if(new_cat_node == NULL)
	{
		printf("Error allocating memory\n");
		return NULL;
	}
	
	first_cat_node = current_cat_node = new_cat_node;

	while(index < RECORDS)
	{
		new_name = (char *)malloc(sizeof(char) * 50);
		strcpy(new_name,category_array[index++]);
		convert_to_uppercase(new_name);
		strcpy(new_cat_node->cat->cat_name,new_name);
		new_cat_node = (struct category_list *)malloc(sizeof(struct category_list));
		new_cat_node->cat = (struct category *)malloc(sizeof(struct category));
		new_cat_node->cat->cat_name = (char *)malloc(sizeof(char) * 50);
		current_cat_node->next_node = new_cat_node;
		current_cat_node = new_cat_node;
		
	}

	cat_list = current_cat_node;
	


	
		

	return cat_list;
}

struct category_list *create_new_list(struct category_list *cat_list)
{
	
	if(cat_list == NULL)
	{
		cat_list = (struct category_list *)malloc(sizeof(struct category_list));
		return cat_list;
	}
	else
	{
		free(cat_list);
		cat_list = (struct category_list *)malloc(sizeof(struct category_list));
		return cat_list;
	}
}

struct category_list *add_to_category_list(struct category_list *cat_list)
{

	if(cat_list == NULL)
	{
		cat_list = initialise_list(cat_list);
		cat_list->cat = create_new_category(cat_list->cat);
		return cat_list;
	}
	else
	{
		current_cat_node = first_cat_node;
		while(current_cat_node)
		{
			current_cat_node = current_cat_node->next_node;
		}
		cat_list->cat = create_new_category(current_cat_node->cat);
		return cat_list;
	}
}

int print_category_list(struct category_list *cat_list)
{	
	cat_list = first_cat_node;
	if(cat_list == NULL)
	{
		printf("Error. List is empty!\n");
		return -1;
	}
	else
	{
		while(cat_list->next_node)
		{
			printf("Category: %s\n", cat_list->cat->cat_name);
			cat_list = cat_list->next_node;
		}
	}
	return 1;
}