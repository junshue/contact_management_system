#include<iostream>
#include "cleanperson.h"
using namespace std;

void CleanPerson::cleanPerson(Addressbooks * abs) {
	cout << "您是否真的要清空通讯录" << endl;
	cout << "1---是！" << endl;
	cout << "2---考虑一下！" << endl;
	int temp;
	cin >> temp;
	if (temp == 1) {
		abs->m_Size = 0;
		cout << "通讯录已清空" << endl;
	}
	else {
		system("pause");
		system("cls");
	}
	system("pause");
	system("cls");
}