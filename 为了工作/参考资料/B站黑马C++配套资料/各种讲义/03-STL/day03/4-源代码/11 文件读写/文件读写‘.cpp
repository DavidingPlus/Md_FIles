#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include<fstream>  //�ļ���д

//�ı��ļ���д
void test01(){
	
	char* fileName = "C:\\Users\\apple\\Desktop\\source.txt";
	char* TagetName = "C:\\Users\\apple\\Desktop\\target.txt";
	ifstream ism(fileName,ios::in); //ֻ����ʽ���ļ�
	ofstream osm(TagetName,ios::out | ios::app);
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

int main(void)
{
	
	test01();
	return 0;
}