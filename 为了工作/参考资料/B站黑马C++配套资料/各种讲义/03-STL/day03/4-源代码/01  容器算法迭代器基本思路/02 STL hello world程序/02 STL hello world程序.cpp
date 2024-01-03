#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector> //��̬���� �ɱ�����
#include<algorithm> //�㷨
using namespace std;

//�����ж�ȡ
#if 0
cin.get(buf, 256); //����������
cin.getline() //����ж���
#endif 

void PrintVector(int v){
	cout << v << " ";
}

//STL�����﷨
void test01(){
	//����һ��������������ָ�����������ŵ�Ԫ��������Int
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	//ͨ��STL�ṩ��for_each�㷨
	//�����ṩ�ĵ�����
	//vector<int>::iterator ����������
	vector<int>::iterator pBegin = v.begin();
	vector<int>::iterator pEnd = v.end();

	//�����п��ܴ�Ż������������ͣ�Ҳ���ܴ���Զ�����������
	for_each(pBegin, pEnd, PrintVector);
}

//����Ҳ���Դ���Զ�����������
class Person{
public:
	Person(int age,int id):age(age),id(id){}
public:
	int age;
	int id;
};

void test02(){
	
	//��������������ָ��������Ԫ��������Person
	vector<Person> v;
	Person p1(10, 20), p2(30, 40), p3(50, 60);
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);

	//����
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++){
		cout << (*it).age << " " << (*it).id << endl;
	}
}

//�������Perosn����ָ�룬���Ҵ�ӡfor_each ��ӡ ���� ��������ʽ��
//����Ƕ������ һ��������Ϊ��һ������Ԫ��


int main(void)
{
	test01();
	test02();


	return 0;
}