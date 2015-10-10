

struct Node{
	int val;
	Node*prev;
};

Node *first(int val); 

void push(int val, Node**top);

int pop(Node**top);

void print(Node*top);
