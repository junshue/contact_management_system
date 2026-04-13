#include<iostream>
#include "showmenu.h"
#include "addperson.h"
#include "showperson.h"
#include "delectperson.h"
#include "findperson.h"
#include "modifyperson.h"
#include "cleanperson.h"

using namespace std;

#define MAX 1000

struct Person {
	string m_Name;
	int m_Sex;
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbooks{
    Person personArray[MAX];
    int m_Size;
};

int main(){
	Addressbooks abs; //创建通讯录结构体变量
	abs.m_Size = 0; // 初始化通讯录人数

	int select = 0; //创建用户选择输入变量
	while (true) {
		ShowMenu(); // 菜单调用
		cin >> select;
		switch (select) {
		case 1://1、添加联系人
			addPerson(&abs);
			break;
		case 2://2、显示联系人
			showPerson(&abs);
			break;
		case 3://3、删除联系人
			delectPerson(&abs);
			break;
		case 4://4、查找联系人
			findPerson(&abs);
			break;
		case 5://5、修改联系人
			modifyPerson(&abs);
			break;
		case 6://6、清空联系人 
			cleanPerson(&abs);
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		}
	}
	//system("pause");
	return 0;
}