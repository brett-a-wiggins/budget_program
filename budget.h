#ifndef BUDGET_H
#define BUDGET_H

struct budget{
	struct expense_list *budget_entries;
	struct bank_account *budget_bank_account;
	struct category_list *budget_categories;
};

struct budget *create_a_new_budget(struct budget *);
void clean_up(struct budget *);
void view_reports(struct budget *);
void add_to_budget(struct budget *);
void search_budget(struct budget *);
void save_budget_to_disk(struct budget *);
struct budget *load_budget_from_file(struct budget *);
#endif