#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Test
{
public:
	Test()
	{
		m_x = 0;
		m_y = 0;
	}
	Test(int x, int y)
	{
		m_x = x;
		m_y = y;
	}

	void printT()
	{
		cout << "x =" << m_x << ", y = " << m_y << endl;
	}

#if 1
	//��ʾ�Ŀ������캯��
	Test(const Test &another)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}
#endif
#if 0
	//����һ��Ĭ�ϵĿ������캯��
	Test(const Test &another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
#endif

	//=��ֵ������
	void operator=(const Test &another)
	{
		m_x = another.m_x;
		m_y = another.m_y;
	}
private:
	int m_x;
	int m_y;
};

int main(void)
{
	Test t1(100, 200); 

	Test t2(t1); 

	t2.printT();



	//���캯���Ƕ����ʼ����ʱ�����
	Test t3; //��Ȼ�ǳ�ʼ��t3��ʱ�����t3���캯������Ȼ�ǵ���t3�Ŀ������캯��

	t3 = t1; //���õĲ���t3�������캯��������t3�ĸ�ֵ����������

	return 0;
}