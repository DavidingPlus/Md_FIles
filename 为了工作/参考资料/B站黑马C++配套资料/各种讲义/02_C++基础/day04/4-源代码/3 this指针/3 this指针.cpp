#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Test
{
public:
	Test(int k)
	{
		this->m_k = k;
	}

	int getK()  const//��Ա����β������const ������thisָ��
	{
		//this->m_k = 100; //thisָ�벻�� const Test *
		//this++;// thisָ����һ����ָ�룬 Test *const  
		//this->m_k = 100;
		//this = this + 1;
		return this->m_k;
	}

	//static��Ա������ֻ�ܷ���static��Ա����
	static int s_getK()
	{
		//return m_k;
		return s_k;
	}
private:
	int m_k;
	static int s_k;
};

int Test::s_k = 0;


int main(void)
{
	Test t1(10); //Test(&t1, 10);
	Test t2(20);


	return 0;
}