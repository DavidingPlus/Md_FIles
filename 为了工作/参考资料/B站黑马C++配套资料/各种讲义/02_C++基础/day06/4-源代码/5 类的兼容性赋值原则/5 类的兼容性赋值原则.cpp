#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

/*
	���������Ե����������ʹ�á�
	����������ֱ�Ӹ�ֵ���������
	����������ֱ�ӳ�ʼ���������.
	****����ָ�����ֱ��ָ���������***
	�������ÿ���ֱ�������������
*/

class Parent
{
public:
	void printP() {
		cout << "a " << this->a << endl;
	}
	int a;
};

class Child :public Parent
{
public:
	void printC()
	{
		cout << "b = " << this->b << endl;
	}
	int b;
};


void myPrint(Parent *pp)
{
	pp->printP();
}

int main(void)
{
//	Parent p;

//	Child c = p; //p������䲻��c����ռ䣬

//	Child c;

//	Parent p = c;//c ������ռ�õ��ڴ�ռ� >= p����ռ�ÿռ� �ܹ������p��������Ҫ�ռ䡣

//	p = c;

//	c.printP(); //c �ܹ��������� p ��ʹ�á�

	Parent *pp = NULL;//����ָ��
	Child *cp = NULL;//����ָ��
	

	Parent p;//�������
	Child c; //�������

	

	pp = &c;//c �ڴ沼���ܹ����㸸��ָ���ȫ������ ������һ�����ӵĶ����ַ������ָ�븳ֵ��
	
	myPrint(&p);
	myPrint(&c);

	return 0;
}