#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include<iomanip>

#if 0 

cout; //ȫ�������� ������ݵ���ʾ��
cin;
//cerrû�л����� clog�л�����
cerr; //��׼����  ������ݵ���ʾ��
clog; //��׼��־  ������ݵ���ʾ��

#endif

//��׼������ cin.get()
void test01(){

	char ch;
	//while ((ch = cin.get()) != EOF){
	//	cout << ch << endl;
	//}

	//cin.get
	char ch2;
	//cin.get(ch2); //��ȡһ���ַ�
	char buf[256] = { 0 };
	//cin.get(buf, 256); //�ӻ�������һ���ַ���
	cin.getline(buf,256); //��ȡһ������ �������з�
	cout << buf;
}

//cin.ignore ���Ե�ǰ���ַ�
void test02(){
	
	char ch;
	cin.get(ch); //�ӻ�����Ҫ���� ����
	cout << ch << endl;
	cin.ignore(10); //���Ե�ǰ�ַ� �ӻ�����ȡ����
	cin.get(ch);
	cout << ch << endl;
}

void test03(){
	
	cout << "��������������ַ���:" << endl;
	char ch;
	ch = cin.peek(); //͵��һ�»����������ص�һ���ַ�
	if (ch >= '0' && ch <= '9'){
		
		int number;
		cin >> number;
		cout << "�������������:" << number << endl;

	}
	else{
		char buf[256] = { 0 };
		cin >> buf;
		cout << "����������ַ���:" << buf << endl;
	}

}

//cin.putback cin.get
void test04(){
	
	cout << "�������ַ�����������:" << endl;
	char ch;
	cin.get(ch); //�ӻ�����ȡ��һ���ַ�
	if (ch >= '0' && ch <= '9'){
		
		//ch�Żص�������
		cin.putback(ch);
		int number;
		cin >> number;

		cout << "�������������:" << number << endl;

	}
	else{
	
		cin.putback(ch);
		char buf[256] = { 0 };
		cin >> buf;
		cout << buf << endl;
	}
}

//��׼�����
void test05(){

	cout << "hello world" << endl;
	//cout.flush();
	cout.put('h').put('e').put('l') << endl;
	cout.write("hello Zhaosi!", strlen("hello Zhaosi!"));
}

//��ʽ�����
void test06(){

	//��Ա�����ķ�ʽ
	int number = 10;
	cout << number << endl;
	cout.unsetf(ios::dec); //ж�ص�ǰĬ�ϵĵ�10���������ʽ
	cout.setf(ios::oct); //�˽������
	cout.setf(ios::showbase);
	cout << number << endl;
	cout.unsetf(ios::oct); //ж��8����
	cout.setf(ios::hex);
	cout << number << endl;

	cout.width(10);
	cout.fill('*');
	cout.setf(ios::left);
	cout << number << endl;
	

	//ͨ�����Ʒ�
	int number2 = 10;
	cout << hex
		<< setiosflags(ios::showbase)
		<< setw(10)
		<< setfill('*')
		<< setiosflags(ios::left)
		<< number2
		<< endl;

}




int main(void)
{
	//test01();
	test02();
	//test03();
	//test04();
	//test05();
	//test06();
	
	return 0;
}