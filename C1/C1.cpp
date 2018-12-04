// C1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"function.h"
using namespace std;

int main()
{
	int i = 42;
	cout << "max(7,i):  " << ::max(7, i) << '\n';

	double f1 = 3.4;
	double f2 = -6.7;
	cout << "max(f1,f2):  " << ::max(f1, f2) << '\n';

	string s1 = "mathmetics";
	string s2 = "math";
	cout << "math(s1,s2):  " << ::max(s1, s2) << '\n';

	void* vp = nullptr;
	fooA(vp);

	//fooB("hi");
	/*
	no error untill instantiated
	line 14 C3861	“undeclared”: 找不到标识符
	line 14 C3861	“undeclared”: 找不到标识符
	line 14 C3861	“undeclared”: 找不到标识符
	line 14 C3861	“undeclared”: 找不到标识符
	line 15 C2338	T too small
	line 15 C2338	T too small
	line 16 C2338	int too small
	line 16 C2338	int too small
	*/
    return 0;
}

