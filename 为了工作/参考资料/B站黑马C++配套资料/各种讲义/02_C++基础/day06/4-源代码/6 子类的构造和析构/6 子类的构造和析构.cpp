#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Parent
{
public:
	Parent()
	{
		cout << "Parent().." << endl;
		a = 0;
	}
	Parent(int a) {
		cout << "Parent(int)..." << endl;
		this->a = a;
	}
	~Parent(){
		cout << "~Parent" << endl;
	}
	int a;
};

class Child :public Parent
{
public:
	//�ڵ�������Ĺ��캯��ʱ��һ������ø���Ĺ��캯��
	// �����ȹ��죬������졣
	Child(int a, int b) :Parent(a)
	{
		cout << "Child(int, int)..." << endl;
		this->b = b;
	}

	void printC() {
		cout << "b = " << b << endl;
	}

	~Child(){
		cout << "~Child()..." << endl;
	}

	int b;
};

int main(void)
{
	Child c(10, 20);

	c.printC();
	
	return 0;
}