#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//�����ķ���ֵ�� �����β��б������ĸ������������ͣ�����˳��
//��������  ��������ͬ�� �����б�ͬ
//��������ֵ�����ǹ��ɺ������ص�����
int func(int a, int b) 
{
	cout << "func1" << endl;
	return 0;
}

//���Ҫ�Ǻ������ػ�����ҪдĬ�ϲ�����Ϊ�˱�����ó��ֺ�����ͻ
char func(int a, int b, int)
{
	cout << "func2" << endl;
	return 0;
}

#if 1
int func(int a, char *str)
{
	cout << "func3" << endl;
	return 0;
}
#endif

void print1(int a)
{
	cout << "print 1" << endl;
	cout << "a = " << a << endl;
}

void print1(double b)
{
	cout << "print 2" << endl;
	cout << "b = " << b << endl;
}
void print1(char ch)
{
	cout << "print 3" << endl;
	cout << "ch =" << ch << endl;
}

int main(void)
{
	//func(10, 20);

	func(10, "abc");

	print1(10);

	print1(19.00);

	print1(3.1f);

	print1('a');//char->int

	//print1("itcast");
	//1 ����ܹ��ϸ�ƥ�������ȫƥ���
	//2 ���û����ȫƥ�䣬������ʿת��
	//3 ��ƥ�䲻��������ʧ�ܡ�

	return 0;
}