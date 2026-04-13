#include<iostream>
#include "showmenu.h"
#include "addperson.h"
#include "showperson.h"
#include "delectperson.h"
#include "findperson.h"
#include "modifyperson.h"
#include "cleanperson.h"
#include "common.h"

using namespace std;

int main(){
	Addressbooks abs; //创建通讯录结构体变量
	abs.m_Size = 0; // 初始化通讯录人数

	int select = -1; //创建用户选择输入变量
	while (select != 0) {
        ShowMenu sm;
		sm.showMenu(); // 菜单调用
		cin >> select;
		switch (select) {
		case 1://1、添加联系人
			AddPerson ap;
            ap.addPerson(&abs);
			break;
		case 2://2、显示联系人
            ShowPerson sp;
			sp.showPerson(&abs);
			break;
		case 3://3、删除联系人
            DelectPerson dp;
			dp.delectPerson(&abs);
			break;
		case 4://4、查找联系人
            FindPerson fp;
			fp.findPerson(&abs);
			break;
		case 5://5、修改联系人
            ModifyPerson mp;
			mp.modifyPerson(&abs);
			break;
		case 6://6、清空联系人 
            CleanPerson cp;
			cp.cleanPerson(&abs);
			break;
		case 0://0、退出通讯录
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
        default:
            cout << "输入错误，请重新输入" << endl;
            break; 
		}
	}
	//system("pause");
	return 0;
}