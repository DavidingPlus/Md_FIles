#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//�㷨������ͳ��ĳ��Ԫ�صĸ���
int mycount(int* start,int* end,int val){
	int num = 0;
	while (start != end){
		if (*start == val){
			num++;
		}
		start++;
	}

	return num;
}

int main(void){


	//���� ����
	int arr[] = { 0, 7, 5, 4, 9, 2, 0 };
	int* pBegin = arr; //ָ�������ĵ�һ��λ��
	int* pEnd = &(arr[sizeof(arr) / sizeof(int)]);
	
	int num = mycount(pBegin, pEnd, 0);
	cout << "num ��" << num << endl;

	return 0;
}