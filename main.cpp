#include "stdafx.h"
#include <clocale>
#include "defs.h"




int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int i;


	Node *top = first(1);

	for (i = 2; i < 6; i++)
    {
        push(i,&top);
    }


	print(top);
    printf("\n");

	for (int i = 1; i < 2; i++)
    {
        pop(&top);
    }


	print(top);
    printf("\n");
	return 0;
}

