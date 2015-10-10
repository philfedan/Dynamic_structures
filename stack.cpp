#include "stdafx.h"
#include "defs.h"



void push(int val, Node **top)
{

	Node *n = new Node;
	n->val = val;
	n->prev = *top;
	*top = n;
}

int pop(Node**top)
{
	int temp = (*top)->val;
	Node *n = *top;
	*top = (*top)->prev;
	delete n;
	 
	return temp;
}

void print(Node*top)
{
	while (top)
    {
		printf("%d\n", (top)->val);
		top = (top)->prev;
	}
}

	Node *first(int val)
    {
		Node *top = new Node;
		top->val = val;
		top->prev = 0;
		return top;
	}
