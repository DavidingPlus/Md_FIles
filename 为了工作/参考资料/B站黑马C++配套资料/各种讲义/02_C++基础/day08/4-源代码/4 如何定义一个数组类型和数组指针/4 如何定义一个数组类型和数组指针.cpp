#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//����һ�� ֱ�Ӷ���һ����������
typedef int(ARRAY_INT_10)[10];


//��������
typedef int(*ARRAY_INT_10_P)[10];

int main(void)
{
	int array[10]; //array Ӧ����һ��ָ��int����ָ�롣

	//����һ��
	//ARRAY_INT_10 *array_10_p = &array; //*array_10_p === array

	//��������
	ARRAY_INT_10_P array_10_p = &array;

	for (int i = 0; i < 10; i++) {
		(*array_10_p)[i] = i + 10;
	}

	for (int i = 0; i < 10; i++) {
		cout << array[i] << endl;
	}

	//��������
	int(*p)[10] = &array;

	cout << "------" << endl;
	for (int i = 0; i < 10; i++) {
		cout << (*p)[i] << endl;
	}

	return 0;
}