#include<iostream>
#include "addperson.h"
using namespace std;

void AddPerson::addPerson(Addressbooks * abs) {
	if (abs->m_Size == MAX) {
		cout << "通讯录满了，无法添加！" << endl;
		return;
	}
	else {

		//姓名
		string name;
		cout << "请输入姓名" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		while (true) {
			cin >> age;
			if (age > 0 || age < 100) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			else {
				cout << "请输入正确年龄：" << endl;
			}
		}

		//性别
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		int sex = 0;

		while (true) {
			cin >> sex;
			if (sex == 1 || sex == 2) {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			else {
				cout << "请在1、2中选择" << endl;
			}
		}
		
		//电话
		cout << "请输入联系电话：" << endl;
		string phone;
		while (true) {
			cin >> phone;
			if (phone.length() == 11) {
				abs->personArray[abs->m_Size].m_Phone = phone;
				break;
			}
			else {
				cout << "请输入13位电话号码：" << endl;
			}
		}

		//地址
		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		//更新人数
		abs->m_Size++;
		cout << "添加成功！" << endl;
		system("pause"); //请按任意键继续
		system("cls"); //清屏

	}
}