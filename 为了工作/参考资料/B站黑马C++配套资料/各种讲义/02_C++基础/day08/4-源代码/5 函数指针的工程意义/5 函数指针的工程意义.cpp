#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

int func(int a, int b)
{
	cout << " 1999 ��д�� func" << endl;

	return 0;
}

int func2(int a, int b)
{
	cout << "1999 д�� func2" << endl;
	return 0;
}

int func3(int a, int b) 
{
	cout << "1999�� д�� func3 " << endl;
	return 0;
}

//2018�����һ���µ���ҵ��
int new_func4(int a, int b)
{
	cout << "2018 ��д����ҵ��" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}

//����һ��  �����ķ���ֵ�� �����Ĳ����б��βεĸ��������ͣ�˳��
//����һ���������͡�

typedef int(FUNC)(int, int);

//��������   ����һ������ָ��
typedef int(*FUNC_P)(int, int);


//����һ��ͳһ�Ľӿ� ������ȫ������������

void my_funtion(int(*fp)(int, int), int a, int b)
{
	cout << "1999��ʵ������ܹ�ҵ��" << endl;
	cout << "�̶�ҵ��1" << endl;
	cout << "�̶�ҵ��2" << endl;

	fp(a, b);//�ɱ��ҵ��

	cout << "�̶�ҵ��3" << endl;

}

int main(void)
{
#if 0
	//����һ��
	FUNC *fp = NULL;

	fp = func;
	fp(10, 20);

	FUNC_P fp2 = NULL;

	fp2 = func;

	fp2(100, 200);

	//��������
	int(*fp3)(int, int)   = NULL;
	fp3 = func;
	fp3(1000, 3000);
#endif
	my_funtion(func, 10, 20);
	my_funtion(func2, 100, 200);
	my_funtion(func3, 1000, 2000);

	my_funtion(new_func4, 2000, 3000);
	
	return 0;
}