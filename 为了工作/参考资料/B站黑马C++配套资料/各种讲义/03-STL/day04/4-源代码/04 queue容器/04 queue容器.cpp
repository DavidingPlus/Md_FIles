#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<queue>
using namespace std;

void test01(){
	
	queue<int> q; //��������

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);

	cout << "��β��" << q.back() << endl;

	//���˳��? 10 20 30 40
	while (q.size() > 0){
		
		cout << q.front() << " "; //�����ͷԪ��
		q.pop(); //ɾ����ͷ

	}

	//��ҵ1 queue������Ŷ���ָ��
	//��ҵ2 queue�������stack����
}


int main(void){
	
	test01();
	return 0;
}