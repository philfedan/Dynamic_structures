#include "stdafx.h"
#include "list.h"
#include <iostream>

/*
BRIEF: this function will create first element of the list
IN: informatoin cell/value
OUT: first element
*/

node *first(int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	return pv;
}


/*
BRIEF: this function will add new elements to the end of the list
IN: pointer to the pointer to the end, informatoin cell/value
OUT: ---
*/
void add(node **pend, int d)
{
	node *pv = new node;
	pv->d = d;
	pv->next = NULL;
	(*pend)->next = pv;
	*pend = pv;
}

/*
BRIEF: this function will delete first  of the list
IN: pointer to the pointer to the start
OUT: deleted element
*/

int del(node **pbeg)
{
	int temp = (*pbeg)->d;
	node *pv = *pbeg;
	*pbeg = (*pbeg)->next;
	delete pv;
	return temp;
}

/*
BRIEF: this function will print all list to the screen
IN: pointer to the pointer to the start
OUT: -----
*/

void print(node *pbeg)
{
	node *pv = pbeg;
	while (pv != NULL)
	{
		cout << pv->d;
		cout << " ";
		pv = pv->next;
	}
}

/*
BRIEF: this function will check is the list empty
IN: pointer to the pointer to the start
OUT: it's logical function so it returns logical value true or false
*/

bool is_Empty(node *pbeg)
{
	if (pbeg == NULL)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

/*
BRIEF: this function find element we need by it's value(key)
IN: pointer to the start, and key/value/inf. cell
OUT: element we were looking for
*/


node* find(node *const pbeg, int d)
{
	node *pv = pbeg;
	while (pv)
	{
		if (pv->d == d)
		{
			break;
		}
		pv = pv->next;
	}
	return pv;
}

/*
BRIEF: this function will delete element we need by it's value(key)
IN: pointer to the pointer to the start, key/value/inf. cell
OUT: it's logical function so it returns logical value true or false
*/

bool del_key(node **pbeg, int key)
{
	node *pkey = find(*pbeg, key);

	if (pkey !=NULL)
	{
		if (pkey == *pbeg)
			*pbeg = (*pbeg)->next;
		else
		{
			node*p = *pbeg;
			while (p->next != pkey)
				p = p->next;
			p->next = pkey->next;
		}
		delete pkey;
		return true;
	}
	return false;
}




/*
BRIEF: this function will add new elements after the key/value/inf cell we typed
IN: pointer to the pointer to the start, key, informatoin cell/value
OUT: ---
*/

void insert(node*const pbeg, int key, int d)
{
	node*pkey=NULL;

	if ((pkey = find(pbeg, key))!=NULL)
	{
		node *pv = new node;
		pv->d = d;
		pv->next = pkey->next;
		pkey->next = pv;
	}
}


/*
BRIEF:this function will add new elements before the key/value/inf cell we typed
IN: pointer to the pointer to the start, key, informatoin cell/value
OUT: ---
*/

void insert_before(node**pbeg, int key, int d)
{
	node*pkey = NULL; 
	if ((pkey = find(*pbeg, key))!=NULL)
	{
		node*pv = new node;
		pv->d = d;
		if (pkey == *pbeg)
		{
			pv->next = *pbeg;
			*pbeg = pv;
		}
		else
		{
			pv->next = pkey;
			node*p = *pbeg;

			while (p->next != pkey)
				p = p->next;

			p->next = pv;
		}
	}
}

/*
BRIEF:this function will sort the list by increasing of inf. cell
IN: pointer to the start
OUT: ---
*/


void sort(node *pbeg)
{
	node *p, *pv;
	bool f = 1;
	while (f)
	{
		f = 0;
		p = pbeg;
		pv = p->next;
		while (pv)
		{
			if (pv->d < p->d)
			{
				int t = p->d;
				p->d = pv->d;
				pv->d = t;
				f = 1;
			}
			p = pv;
			pv = pv->next;
		}
	}
}

