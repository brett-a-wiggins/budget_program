#include "category_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
	cat_list = (struct category_list *)malloc(sizeof(struct category_list));
	
	if(cat_list == NULL)
	{
		printf("Error allocating memory\n");
		return NULL;
	}
	first_cat_node = cat_list;
	current_cat_node = first_cat_node;

	while(category_array[index])
	{
		strcpy(current_cat_node->cat.cat_name,category_array[index]);
		new_cat_node = (struct category_list *)malloc(sizeof(struct category_list));
		current_cat_node->next_node = new_cat_node;
		current_cat_node = new_cat_node;
		index++;
	}
	return cat_list;
}