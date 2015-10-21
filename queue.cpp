#include "stdafx.h"
#include "queue.h"
 

void add(node **pend, int d)

{
	node *f = new node; //allocation of memory to create the term

	f->p = d; // filling informatoin cell

	f->adr = 0;//filling direction cell

	(*pend)->adr = f; // setting 
	*pend = f;       // the index of the end
}
	
node *first(int d)

{
	node *pbeg = new node;

    pbeg->p = d;

	pbeg->adr = 0;

	return pbeg;

}

int del(node **pbeg)
{   
	int term1 = (*pbeg)->p; //we need it to remeber inf. cell

	node *pv = *pbeg; //creation new term and intiate it as start

	*pbeg = pv->adr; //changing index of the start

	delete (pv); // removal of the term

	return term1;
}

void print(node *pbeg)
{
	while (pbeg)
		printf("%d", del(&pbeg));

}
