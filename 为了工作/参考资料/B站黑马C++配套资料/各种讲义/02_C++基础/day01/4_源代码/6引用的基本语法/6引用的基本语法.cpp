#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;
/*
1 ����û�ж���, ��һ�ֹ�ϵ����������������ԭ��ĳһ����(ʵ��)�Ĺ�
ϵ���� ��������ԭ���ͱ���һ��, �Ҳ������ڴ档�뱻���õı�������ͬ�ĵ�
ַ��
2 ������ʱ������ʼ��, һ������, ���ɱ����
3 �ɶ�����, �ٴ����á�������õĽ��, ��ĳһ�������ж��������
4 & ����ǰ����������ʱ, �����á�������Ϊȡ��ַ
*/

void change_value(int *p) // int p = a;
{
	*p = 30;
}

void change_value2(int & r)//int &r = a
{
	r = 30; //a = 30
}


int main(void)
{
	int a = 20;
	int b = 30;


	int *p = &a;
	*p = 30;

	p = &b;
	*p = 20;//b

	int &re = a; //int & ʹ�������������ͣ� re����a�ı���

	re = 50;
	&re;
	&a;

	re = b; //��re��Ϊb�����ã�   a = b
	re = 50;
	cout << "a =" <<a << endl;
	cout << "b = " << b << endl;
	int & re2 = b; //����һ��Ҫ��ʼ����

	re2 = a;


	int &re3 = re;

	re3 = 100;
	cout << "a =" << a << endl;
	cout << "re =" << re << endl;
	cout << "re3 =" << re3 << endl;



	cout << "-------------" << endl;
	cout << "a =" << a << endl;
	change_value(&a);
	cout << "a =" << a <<  endl;
	a = 100;
	cout << "-------------" << endl;
	cout << "a =" << a << endl;
	change_value2(a);
	cout << "a =" << a << endl;

	return 0;
}