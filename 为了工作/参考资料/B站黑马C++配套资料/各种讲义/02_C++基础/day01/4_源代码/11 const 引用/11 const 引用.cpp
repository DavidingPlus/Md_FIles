#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;


//const �������ã�һ���const����ָ�����;��һ���ġ�������Ϊ����������
//��֤�ò����������������ֻ���ģ��ں����ڲ��ñ����ⲿ��ֵ
void printB(const int &re)
{
	cout << "re = " << re << endl;
}

int main(void)
{
	const int a = 10; //1��������һ�������������ã� ������һ��const���á�

	const int &re = a;

	int b = 20;
	const int &re2 = b; //2 �෴���һ����ͨ��������һ��const���ý����ǿ��Եġ�

	cout << "b = " << b << endl;
	cout << "re2 =" << re2 << endl;
	//re2 = 300;
	b = 30;
	cout << "b = " << b << endl;
	cout << "re2 =" << re2 << endl; 

	printB(b);
	printB(a);


	const int &re3 = 10;

	//const int &re3 = 10; re3 = &10, ��������ʱ����һ������temp = 10��
	//const int &re3 = temp

	const int *p = &re3;

	*((int*)p) = 30; //temp = 30

	cout << "*p = " << *p << endl;
	cout << "re3 = " << re3 << endl;


	return 0;
}

