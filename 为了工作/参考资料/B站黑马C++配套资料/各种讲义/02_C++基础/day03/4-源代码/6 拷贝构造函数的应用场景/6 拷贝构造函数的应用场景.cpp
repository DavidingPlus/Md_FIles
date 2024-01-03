#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Test
{
public:
	Test()
	{
		cout << "test()..." << endl;
		m_x = 0;
		m_y = 0;
	}
	Test(int x, int y)
	{
		cout << "Test(int x, int y)..." << endl;

		m_x = x;
		m_y = y;
	}
	Test(const Test & another)
	{
		cout << "Test(const Test &)..." << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	void operator=(const Test &another)
	{
		cout << "operatoer = (const Test &)" << endl;
		m_x = another.m_x;
		m_y = another.m_y;
	}

	void printT() {
		cout << "x = " << m_x << ", m_y = " << m_y << endl;
	}

	~Test() {
		cout << "~Test()..." << endl;
	}
private:
	int m_x;
	int m_y;
};


//�����������õ�˳�� �������෴�� ˭�ȹ���ģ�˭��������
//����1
void test1()
{
	Test t1(10, 20);
	Test t2(t1);//Test t2 = t1;
}

//����2
void test2()
{
	Test t1(10, 20);
	Test t2;

	t2 = t1;//=������
}


void func(Test t)//Test t = t1; //Test t �Ŀ������캯��
{
	cout << "func begin..." << endl;
	t.printT();
	cout << "func end..." << endl;
}

//����3
void test3()
{
	cout << "test3 begin..." << endl;
	Test t1(10, 20);

	func(t1);

	cout << "test3 end..." << endl;
}


//����4
Test func2()
{
	cout << "func2 begin..." << endl;
	Test temp(10, 20);
	temp.printT();

	cout << "func2 end..." << endl;

	return temp;
}//�����Ķ��� = temp  ��������.��������(temp)

void test4()
{
	cout << "test4 being.. " << endl;
	func2();// ����һ���������� ��һ����������һ�����������ʱ�򣬺����ⲿû���κ�
			//����ȥ�������� ����������󽫲����ٱ�ʹ�ã����Ҳ������� �����ֱ�ӽ��������������
			//���յ��������ǵȴ����ĺ���ִ������ٻ���.
	//��������ͱ����ա�
	
	cout << "test4 end" << endl;
}

void test5()
{
	cout << "test 5begin.. " << endl;
	Test t1 = func2(); //�᲻�ᴥ��t1����������   t1.����(��������
						//�����ᴥ��t1���������� ����������ת�� t1��
						//������������� �������־ͽ�t1.

	cout << "test 5 end.." << endl;
}

//����6
void test6()
{
	cout << "test6 begin..." << endl;
	Test t1;//t1�Ѿ�����ʼ���ˡ�

	t1 = func2(); //t1�Ѿ�����ʼ���ˣ�����func2���ص��������󲻻��ٴ�ת��������Ȼ����������
					//����t1����õȺŲ�������t1.operator=(��������), Ȼ������������̻��յ���������

	t1.printT();

	cout << "test6 end.." << endl;
}


int main(void)
{
	//test1();
	//test2();
	//test3();
	//test4();
	//test5();
	test6();

	return 0;
}