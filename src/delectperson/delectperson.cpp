#include<iostream>
#include<string>
#include "delectperson.h"
#include "isexist.h"
#include "common.h"
using namespace std;

void DelectPerson::delectPerson(Addressbooks * abs) {
	cout << "请输入需要删除得联系人姓名：" << endl;
	string name;
		cin >> name;
        IsExist exist;
	    int ret = exist.isExist(abs, name);
		if (ret == -1) {
			cout << "通讯录中没有这个人！" << endl;
		}
		else {
			for (int i = ret; i < abs->m_Size; i++) {
				abs->personArray[i] = abs->personArray[i+1];
			}
			abs->m_Size--;
			cout << "删除成功！" << endl;
		}
	system("pause");
	system("cls");
}