#include<iostream>
#include<string>
#include "modifyperson.h"
#include "isexist.h"
#include "common.h"
using namespace std;

void ModifyPerson::modifyPerson(Addressbooks* abs) {
	cout << "请输入你要修改的联系人" << endl;
	string name;
	cin >> name;
    IsExist exist;
	int ret = exist.isExist(abs, name);

	if (ret != -1) {
		int exit = 1;
		while (exit) {
			cout << "请选择你要修改的部分" << endl;
			cout << "1---姓名" << endl;
			cout << "2---年龄" << endl;
			cout << "3---性别" << endl;
			cout << "4---电话" << endl;
			cout << "5---地址" << endl;
			cout << "6---退出" << endl;
			int select;
			cin >> select;
			switch (select) {
			case 1: {
				//姓名
				cout << "请填写修改的姓名：" << endl;
				string name1;
				cin >> name1;
				abs->personArray[ret].m_Name = name1;
			}
				  break;
			case 2: {
				//年龄
				cout << "请填写修改的年龄：" << endl;
				int age;
				cin >> age;
				abs->personArray[ret].m_Age = age;
			}
				  break;
			case 3: {
				//性别
				int sex;
				cout << "请填写修改的性别：" << endl;
				cout << "1---男" << endl;
				cout << "2---女" << endl;
				cin >> sex;
				abs->personArray[ret].m_Sex = sex;
			}
				  break;
			case 4: {
				//电话
				string phone;
				cout << "请填写修改的电话：" << endl;
				cin >> phone;
				abs->personArray[ret].m_Phone = phone;
			}
				  break;
			case 5: {
				//地址
				string addr;
				cout << "请填写修改的地址：" << endl;
				cin >> addr;
				abs->personArray[ret].m_Addr = addr;
			}
				  break;
			case 6:
				system("pause");
				system("cls");
				return;
			default:
				break;
			}
			system("pause");
			system("cls");
		}
	}
	else {
		cout << "通讯录中没有这个人！" << endl;
	}
	system("pause");
	system("cls");
	return;
}