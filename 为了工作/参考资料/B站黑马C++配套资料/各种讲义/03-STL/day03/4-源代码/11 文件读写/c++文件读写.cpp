#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include<fstream>  //�ļ���д

//�ı��ļ���д
void test01(){

	char* fileName = "C:\\Users\\apple\\Desktop\\source.txt";
	char* TagetName = "C:\\Users\\apple\\Desktop\\target.txt";
	ifstream ism(fileName, ios::in); //ֻ����ʽ���ļ�
	ofstream osm(TagetName, ios::out | ios::app);
	//ifstream ism;
	//ism.open(fileName,ios::in);

	if (!ism){
		cout << "���ļ�ʧ��!" << endl;
		return;
	}

	//���ļ�
	char ch;
	while (ism.get(ch)){
		cout << ch;
		osm.put(ch);
	}

	//�ر��ļ�
	ism.close();
	osm.close();

}

//�������ļ�����  �������л�

class Person{
public:
	Person(){}
	Person(int age,int id):age(age),id(id){}
	void Show(){
		cout << "Age:" << age << " Id:" << id << endl;
	}
public:
	int age;
	int id;
};

void test02(){

	//�ı�ģʽ�������ı��ļ���
	//������ģʽ�����Ƕ������ļ���

#if 0
	Person p1(10, 20), p2(30, 40); //������
	//��p1 p2д���ļ���	
	ofstream osm(TagetName, ios::out | ios::binary);
	osm.write((char*)&p1, sizeof(Person)); //�����Ʒ�ʽд�ļ�
	osm.write((char*)&p2, sizeof(Person));
	osm.close();
#endif
	char* TagetName = "C:\\Users\\apple\\Desktop\\target.txt";
	ifstream ism(TagetName,ios::in | ios::binary);
	Person p1,p2;
	ism.read((char*)&p1, sizeof(Person)); //���ļ���ȡ����
	ism.read((char*)&p2, sizeof(Person)); //���ļ���ȡ����

	p1.Show();
	p2.Show();
}


int main(void)
{

	//test01();
	test02();
	return 0;
}