#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class A
{
public:
	void func() {
		cout << "funcA" << endl;
	}
	int a;
};

//��Bӵ����A�ĳ�Ա������ B has A ��//��B ������ ��A
class B
{
public:
	void funcB() {

	}
	A a;
};
//��϶�  ���ھ� �����

//��C �ĳ�Ա����  ��Ҫ��A���βΣ� C use A,//��C ������ ��A
class C
{
public:
	void funcC(A *a){

	}

	void funcC2()
	{

	}
};

//D�̳���A    ��D ����Ǽ̳���A  �� D  is  A ��//��D�̳���A ��϶Ⱥܸ�
class D :public A 
{
public:
	void funcD() {
		cout << this->a << endl;
	}

};

class E :public D
{

};
int main(void)
{
	

	return 0;
}