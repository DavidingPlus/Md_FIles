#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <memory>

using namespace std;

//����1�� ֻҪ�Ǹ����е�private��Ա��������ʲô�̳з�ʽ�����Ӷ����ʲ���
//����2��  ����ǹ��У�public���̳У� �����еķ��ʿ���Ȩ�ޱ��ֲ��䡣
//����3��  ����Ǳ���(protected)�̳�, �����и����г���private��Ա�������ڶ����ж���protected
//����4��  �����˽��(private)�̳У� �����еĸ��׵ĳ���private��Ա�������ڶ��ж���private��Ա��

class Parent
{
public:
	int pub; //������ڲ� �� �ⲿ ���ܷ��ʡ�
protected:
	int pro; //������ڲ����Է��ʣ� ������ⲿ�����Է���
private:
	int pri;  //������ڲ����Է��ʣ� ������ⲿ�����Է���
};

//���м̳�
class Child :public Parent
{
public:
	void func()
	{
		cout << pub << endl; //pub�����public��Ա��������public�̳� ��� ���ڲ� �ⲿ�����Է��ʡ�

		cout << pro << endl;//pro �Ǹ���protected��Ա���� ��public�̳���� ���ڲ������Է��ʡ��ⲿ���ʲ��� 
		                    //��ʱ��pro�������ܹ����ʣ�˵��ʱpro����private��Ա������protected��Ա

		//cout << pri << endl; //pri �Ǹ���private��Ա���� ��public�̳���� ���ڲ�,�ⲿ��[��]���Է��ʡ�
	}

};

//������
class SubChild : public Child
{
	void sub_func()
	{
		cout << pro << endl;
	}
};


//�����̳�
class Child2 :protected Parent
{
public:
	void func2() {
		pub;//��ʱpubͨ��protected�̳� �ܹ�������ڲ����ʡ� 
			//pub ������ڲ����Է��ʣ� ����ⲿ���ʲ��ˣ� ��Ķ��ӿ��Է���
			//pub ����protected��Ա
		pro;//pro ��pub ��һ�������ʣ�proҲ��protected��Ա
		//pri;
	}
};

class Sub_child2:public Child2
{
public:
	void sub_func2() {
		pub;
		pro;
	}
};

//˽�м̳�
class Child3 :private Parent
{
public:
	void func3()
	{
		pub;//pub ������ڲ����Է��ʡ�������ڲ����Է��ʣ�����ⲿ���ܷ��ʡ�
		    //pub �ڶ����з��ʲ��ˣ�˵��pub��Child3���� ˽�г�Ա
		pro;//pro ��pub��������һ���� Ҳ��˽�г�Ա��
		pri;
	}
};

class Sub_Child3 :public Child3
{
public:
	void sub_fun3()
	{
		pub;
		pro;
	}
};

//����ԭ��  
//1 �����õĳ�Ա������������ڲ���������ⲿ
//2 �����Ӽ̳з�ʽ��
//3 ��ǰ�����ڶ����еı����ڸ����еķ��ʿ���Ȩ��

int main(void)
{
	Child c1;
	c1.func();

	c1.pub;
	//c1.pri;

	//Child2 c2;
	//c2.pub;
	//c2.pro;
	
	Child3 c3;
	//c3.pub;
	//c3.pro;

	Child2 c2;
	c2.pub;
	c2.pro;

	c1.pub;
	

	return 0;
}