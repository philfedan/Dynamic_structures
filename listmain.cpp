#include "stdafx.h"
#include "list.h"
#include <iostream>
#include <conio.h>


using namespace std;




int _tmain(int argc, _TCHAR* argv[])
{
	int a,key, mn;
	node *pbeg = NULL;
	node *pend = NULL;
	setlocale(LC_ALL, "rus");


	do
	{
		cout << "Выберите пунк из меню:" << endl;
		cout << "0 - Выход" << endl;
		cout << "1 - Добавить элемент в начало списка" << endl;
		cout << "2 - Добавить элемент в список после ключа" << endl;
		cout << "3 - Добавить элемент в список до ключа" << endl;
		cout << "4 - Удалить элемент из конца списка" << endl;
		cout << "5 - Удалить элемент из списка по ключу" << endl;
		cout << "6 - Сортировка" << endl;
		cout << "7 - Печать списка" << endl;
		cin >> mn;
		switch (mn)

		{

		case 1:

		{
			cout << "Введите число в список:" << endl;
			cin >> a;
			if (is_Empty(pbeg))
			{
				pbeg = pend = first(a);
				system("cls");
			}
			else
			{
				add(&pend, a);
				system("cls");
			}
			break;

		}
		
		case 2:
		
		{
			cout << "Введите число в список:" << endl;
			cin >> a;
			cout <<  endl;
			cout << "Введите ключ:" << endl;
			cin >> key;
			if (is_Empty(pbeg))
			{
				cout << "Элементов в списке нет";
			}
			else
			{
				insert(pbeg,key,a);
				system("cls");
			}
			break;
		}

		case 3:
		
		{
			cout << "Введите число в список:" << endl;
			cin >> a;
			cout << endl;
			cout << "Введите ключ:" << endl;
			cin >> key;
			cout << endl;
			if (is_Empty(pbeg))
			{
				system("cls");
				cout << "Элементов в списке нет";
				cout << endl;
				cout << endl;
				cout << endl;
			}
			else
			{
				insert_before(&pbeg, key, a);
				system("cls");
			}
			break;
		}


		case 4:

		{
			if (is_Empty(pbeg))
			{
				system("cls");
				cout << "Элементов в списке нет" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
			}
			else
			{
				del(&pbeg);
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
			}
			break;

		}
		case 5:

		{
			cout << "Введите ключ";
			cin >> key;
			cout << endl;
			if (is_Empty(pbeg) == 1)
			{
				system("cls");
				cout << "Элементов в списке нет" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
			}
			else
			{
				del_key(&pbeg,key);
				system("cls");
				cout << endl;
				cout << endl;
				cout << endl;
			}
			break;

		}
		

		case 6:
		{
			if (is_Empty(pbeg))
			{
				system("cls");
				cout << "Элементов в списке нет";
				cout << endl;
				cout << endl;
				cout << endl;
				
			}
			else
			{
				sort(pbeg);
				system("cls");
			}
			break;
		}

		
		case 7:

		{
			if (is_Empty(pbeg))
			{
				system("cls");
				cout << "Элементов в списке нет" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
			}
			else
			{
				system("cls");
				print(pbeg);
				cout << endl;
				cout << endl;
				cout << endl;
			}
			break;

		}
		
		
		
		}
		if (mn<0 || mn>7)
			system("cls");
	} while (mn != 0);
	_getch();
	return 0;
}
		
