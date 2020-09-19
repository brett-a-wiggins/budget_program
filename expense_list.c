#include "expense_list.h"
#include <stdlib.h>


struct expense_list *create_new_expense_list(struct expense_list *new_list)
{
	if(new_list == NULL)
	{
		new_list = (struct expense_list *)malloc(sizeof(struct expense_list));
		return new_list;
	}
	else
	{
		free(new_list);
		new_list = (struct expense_list *)malloc(sizeof(struct expense_list));
		return new_list;
	}
}

struct expense_list *add_to_expense_list(struct expense *new_expense)
{

}