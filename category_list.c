#include "category_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

struct category_list *initialise_list(struct category_list *cat_list)
{
	int index = 0;
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
		strcpy(new_cat_node->cat->cat_name,category_array[index++]);
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