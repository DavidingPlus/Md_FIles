#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Parent
{
public:
	Parent(int a)
	{
		cout << "Parent(int ..)" << endl;
		this->a = a;

		//print();//�ǵ��ø����print���� ���� �����print������
				//ͨ����� ��ʱ���õĸ����print �����������print
	}

	virtual void print()
	{
		cout << "Parent::print()...a = "<<a << endl;
	}
private:
	int a;
};

class Child :public Parent
{
public:
	Child(int a, int b) :Parent(a) //�ڵ��ø���Ĺ�������ʱ�򣬻Ὣvptrָ�뵱������������
									//��ʱ����ʱָ������麯����


	{
		//���������Ŀռ��б�����������vptrָ��ʹ�ָ����ı� ��� ָ������ı�

		cout << "Child (int ,int )" << endl;
		this->b = b;
		print();//��ʱvptrָ���Ѿ��ص��� ����ı� ���õ��������print������

	}

	virtual void print() {
		cout << "Child ::Print()..b = " << b << endl;
	}
private:
	int b;
};

int main(void)
{
	Parent *pp = new Child(10, 20);
	//pp->print();//������̬

	delete pp;
	
	return 0;
}