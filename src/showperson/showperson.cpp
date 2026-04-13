#include<iostream>
#include "showperson.h"
using namespace std;


void ShowPerson::showPerson(Addressbooks * abs) {
	//判断人数是否为0
	if (abs->m_Size == 0) {
		cout << "通讯录暂时还没添加联系人！" << endl;
		system("pause"); //请按任意键继续
		system("cls"); //清屏
		return;
	}
	for (int i = 0; i < abs->m_Size; i++) {
		cout << "姓名： " << abs->personArray[i].m_Name << "\t";
		cout << "年龄： " << abs->personArray[i].m_Age<< "\t";
		cout << "性别： " << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "电话： " << abs->personArray[i].m_Phone << "\t";
		cout << "地址： " << abs->personArray[i].m_Addr<< endl;
	}
	system("pause"); //请按任意键继续
	system("cls"); //清屏
}

