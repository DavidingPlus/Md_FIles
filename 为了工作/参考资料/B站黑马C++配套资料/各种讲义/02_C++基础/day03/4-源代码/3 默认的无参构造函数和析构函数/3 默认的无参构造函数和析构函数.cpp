#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Test
{
public:
	//Ĭ�ϵ��޲ι��캯��
#if 0
	Test()
	{

	}
#endif
	//��ʾ�ṩһ���в����Ĺ��캯����Ĭ�ϵĹ��캯���Ͳ�������
	Test(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	Test() {
		m_x = 0;
		m_y = 0;
	}

	void printT()
	{
		cout << "x = " << m_x << "  y = " << m_y << endl;
	}

	//Ĭ�ϵ���������
#if 0
	~Test()
	{

	}
#endif
	~Test() {
		cout << "~Test()..." << endl;
	}


private:
	int m_x;
	int m_y;
};

int main(void)
{
	Test t1;//����Test�޲ι���
	t1.printT();
	
	return 0;
}