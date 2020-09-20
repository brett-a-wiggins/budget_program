#include "bank_account.h"
#include "io.h"
#include <stdlib.h>
#include <stdio.h>

struct bank_account *create_new_account(struct bank_account *new_account)
{
	printf("\nCreating new bank account.\n");
	new_account = (struct bank_account *)malloc(sizeof(struct bank_account));
	printf("Please enter your account number: ");
	new_account->account_number = get_integer_input();
	printf("Please enter the BSB: ");
	new_account->BSB = get_integer_input();
	printf("Please enter account name: ");
	get_string_input(new_account->account_name);
	printf("Please enter balance: ");
	new_account->balance = get_double_input();
	return new_account;
}