// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <clocale>
#include "stdio.h"
#include "queue.h"


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");
	int n;
	printf("Введите первый элемент\n");
	scanf_s("%d", n);
	node *pbeg = first(1);
	node *pend = pbeg;
    for (int i; i < 10; i++)
	{
		add(&pend, i);
	}

	print(pbeg);
	return 0;
}


