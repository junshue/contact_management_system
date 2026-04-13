#include<iostream>
#include<string>
#include "isexist.h"
#include "common.h"
using namespace std;

//检测联系人是否存在 存在返回地址 不存在返回-1
int IsExist::isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}