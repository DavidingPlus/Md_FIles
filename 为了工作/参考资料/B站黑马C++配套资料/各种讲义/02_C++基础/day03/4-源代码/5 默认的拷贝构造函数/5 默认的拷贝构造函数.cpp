#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
#if 0
	A()
	{
		
	}
#endif
#if 0
	A(const A &another)
	{
		m_a = another.m_a;
		m_b = another.m_b;
	}
#endif
	A()
	{

	}
	A(int a, int b)
	{

	}
#if 0
	~A()
	{

	}
#endif
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int m_a;
	int m_b;
};

//���� ���и�Ĭ�ϵ��޲ι��캯����	��
//		-->��û���κ�***��ʾ�Ĺ��캯������ʾ���޲ι�����ʾ�вΣ���ʾ�������죩*** ��ʱ��Ĭ���޲ι��캯���ͻ���֡�

//		����Ĭ�ϵĿ������캯����
//		-->��û�� **��ʾ�Ŀ������� ***  �ĺ�����Ĭ�ϵĿ�������ͻ���֡�

//     ����Ĭ�ϵ���������
//      --> ��û��***��ʾ����������***��ʱ��  Ĭ�ϵ����������ͻ���֡�


int main(void)
{
	A a;
	
	A a1(a);
	
	return 0;
}