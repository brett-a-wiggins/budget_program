struct expense{
	char expense_name[50];
	
	/* Date type goes here */
	
	struct category expense_category;
	
	char expense_description[100];
	
	double expense_amount;

};