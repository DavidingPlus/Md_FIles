#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>
using namespace std;

//��ʼ��
void test01(){

	string s1; //�����޲ι���
	string s2(10, 'a');
	string s3("abcdefg"); 
	string s4(s3); //��������


	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
}

//��ֵ����
void test02(){
	
	string s1;
	string s2("appp");
	s1 = "abcdef";
	cout << s1 << endl;
	s1 = s2;
	cout << s1 << endl;
	s1 = 'a';
	cout << s1 << endl;

	//��Ա����assign
	s1.assign("jkl");
	cout << s1 << endl;
}

//ȡֵ����
void test03(){


	string s1 = "abcdefg";

	//����[]������
	for (int i = 0; i < s1.size();i++){
		cout << s1[i] << " ";
	}
	cout << endl;

	//at��Ա����
	for (int i = 0; i < s1.size(); i++){
		cout << s1.at(i) << " ";
	}
	cout << endl;

	//����[]��ʽ �������Խ�磬ֱ�ӹ���
	//at��ʽ ����Խ�� ���쳣out_of_range

	try{
		//cout << s1[100] << endl;
		cout << s1.at(100)  << endl;
	}
	catch (...){
		cout << "Խ��!" << endl;
	}
 
}

//ƴ�Ӳ���
void test04(){
	string s = "abcd";
	string s2 = "1111";
	s += "abcd";
	s += s2;
	cout << s << endl;


	string s3 = "2222";
	s2.append(s3);
	cout << s2 << endl;


	string s4 = s2 + s3;
	cout << s4 << endl;
}

//���Ҳ���
void test05(){
	
	string s = "abcdefghjfgkl";
	//���ҵ�һ�γ��ֵ�λ��
	int pos = s.find("fg");
	cout << "pos:" << pos << endl;

	//�������һ�γ��ֵ�λ��
	pos = s.rfind("fg");
	cout << "pos:" << pos << endl;

}


//string�滻
void test06(){
	string s = "abcdefg";
	s.replace(0,2,"111");
	cout << s << endl;
}

//string�Ƚ�
void test07(){
	
	string s1 = "abcd";
	string s2 = "abce";

	if (s1.compare(s2) == 0){
		cout << "�ַ������!" << endl;
	}
	else{
		cout << "�ַ��������!" << endl;
	}

}

//�Ӵ�����
void test08(){
		
	string s = "abcdefg";
	string mysubstr = s.substr(1, 3);
	cout << mysubstr << endl;
}

//�����ɾ��
void test09(){
	
	string s = "abcdefg";
	s.insert(3,"111");
	cout << s << endl;

	s.erase(0, 2);
	cout << s << endl;
}

int main(void){
	
	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	//test07();
	//test08();
	test09();


	return 0;
}