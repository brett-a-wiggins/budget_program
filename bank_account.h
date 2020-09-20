#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

struct bank_account{
	int account_number;
	int BSB;
	char *account_name;
	double balance;

};

struct bank_account *create_new_account(struct bank_account *);

#endif