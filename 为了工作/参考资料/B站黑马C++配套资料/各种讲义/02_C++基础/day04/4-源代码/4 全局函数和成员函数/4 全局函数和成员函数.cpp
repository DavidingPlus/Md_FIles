#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Test
{
public:
	Test(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	void printT()
	{
		cout << "a = " << this->a << ", b=" << this->b << endl;
	}

	int getA()
	{
		return this->a;
	}

	int getB()
	{
		return this->b;
	}

	//��Ա����
	Test TestAdd(Test &another)
	{
		Test temp(this->a + another.a,this->b + another.b);

		return temp;
	}

	//+= ����
	Test& TestAdd2(Test &another)
	{
		this->a += another.a;
		this->b += another.b;

		//this===>&t1
			
		return *this;//����뷵��һ������ı����ڳ�Ա�����У���*this����
	}

private:
	int a;
	int b;
};


/*
//1 ��ȫ���ṩһ������Test��ӵĺ���
Test TestAdd(Test &t1, Test &t2)
{
	Test temp(t1.getA() + t2.getA(), t1.getB() + t2.getB());

	return temp;
}
*/

int main(void)
{
	Test t1(10, 20);
	Test t2(100, 200);

	//Test t3 = TestAdd(t1, t2);
	Test t3 = t1.TestAdd(t2);

	t3.printT();


	//((t1 += t2) += t2 )+= t2

	//������һ�������������ó�Ա������ÿ�ζ���ı��������Ա������Ҫ�������á�
	t1.TestAdd2(t2).TestAdd2(t2);

	t1.printT();

	return 0;
}