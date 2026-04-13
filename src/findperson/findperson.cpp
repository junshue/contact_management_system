#include<iostream>
#include<string>
#include "findperson.h"
#include "isexist.h"
#include "common.h"
using namespace std;

void FindPerson::findPerson(Addressbooks* abs) {
	cout << "请输入你要查找的联系人" << endl;
	string name;
	cin >> name;
    IsExist exist;
	int ret = exist.isExist(abs, name);
	if (ret != -1) {
		cout << "姓名： " << abs->personArray[ret].m_Name << "\t";
		cout << "年龄： " << abs->personArray[ret].m_Age << "\t";
		cout << "性别： " << (abs->personArray[ret].m_Sex == 1?"男" : "女") << "\t";
		cout << "电话： " << abs->personArray[ret].m_Phone << "\t";
		cout << "地址： " << abs->personArray[ret].m_Addr << endl;
	}
	else {
		cout << "通讯录中没有这个人！" << endl;
	}
	system("pause");
	system("cls");
}