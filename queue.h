struct node
{
	int p;
	node *adr;
};

void add(node **pend, int d); //this function will add new term to the end of the queue

int del(node **pbeg); //this function will delete term from the begging of the queue

void print(node *pbeg); //this function will print all terms from the first until the end of the queue

node *first(int d); //the initial formation of the queue
