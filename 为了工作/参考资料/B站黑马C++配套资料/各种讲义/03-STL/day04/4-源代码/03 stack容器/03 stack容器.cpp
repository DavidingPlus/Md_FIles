#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
using namespace std;

void test01(){


	//��ʼ��
	stack<int> s1;
	stack<int> s2(s1);

	//stack����
	s1.push(10);
	s1.push(20);
	s1.push(30);
	s1.push(100);
	cout << "ջ��Ԫ��:" << s1.top() << endl;
	s1.pop(); //ɾ��ջ��Ԫ��

	//��ӡջ����������
	while (!s1.empty()){
		cout << s1.top() << " ";
		s1.pop();
	}

	cout << "size��" << s1.size() << endl;

	//��ҵ1 ջ������Ŷ���ָ��
	//��ҵ2 ջ������Ŷ���

}

int main(void){

	test01();


	return 0;
}