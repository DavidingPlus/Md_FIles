#include <iostream>


//iostream �ṩһ���������ռ�Ķ����� ��׼�������ռ��� std

//��ʽ����
#if 0
using std::cout; //���������ռ��е�һ������
using std::endl;
using std::cin;
#endif

//��ʽ��
using namespace std;

int main(void)
{
	int a = 0;
#if 0
	//��ʽһ��
	std::cout << "nihao shijie" << std::endl;
	std::cout << "nihuai shijie" << std::endl;
#endif

	cout << "nihuai shijie" << endl;

	cin >> a;


	return 0;
}