#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;


//����Ⱥ
class Yuebuqun
{
public:
	Yuebuqun( string kongfu)
	{
		this->kongfu = kongfu;
	}

	virtual  void fight() //��ʶ����һ����Ա������һ���麯����
	{
		cout << "����Ⱥ" << "ʹ����" << kongfu << "����" << endl;
	}

	void print()
	{

	}

	string kongfu;
};

//��ƽ֮ �̳��� ����Ⱥ
class Linpingzhi :public Yuebuqun
{
public:
	Linpingzhi(string kongfu) :Yuebuqun(kongfu)
	{

	}

	//���˵��������һ���麯����fight�� ���� �������ȥ��д����麯����
	void fight()
	{
		cout << "��ƽ֮" << "ʹ����" << kongfu << "����" << endl;
	}

	void print()
	{

	}
};

class Linghuchong :public Yuebuqun
{
public:
	Linghuchong(string kongfu) :Yuebuqun(kongfu)
	{

	}

	void  fight()
	{
		cout << "����� " << "ʹ����" << kongfu << endl;
	}
};

//��ȫ���ṩһ���򶷵ķ���
void fightPeople(Yuebuqun *hero)//Yuebuqun *hero = xiaopp;  Yuebuqun *hero = xiaoyy;
{
	cout << "���ô��˵ķ���" << endl;
	hero->fight();//ϣ�����ݽ�������������࣬���������fight
			      //������ݽ������Ǹ��࣬ ���ø����fight
					//������Ϊ���� ��̬��Ϊ��
}

//��̬������������Ҫ������
//1. Ҫ�м̳С�
//2. Ҫ���麯����д��
//3. ����ָ������� ָ�� �������

int main(void)
{
	Yuebuqun *xiaoyy = new Yuebuqun("��������");

	//xiaoyy->fight();



	Linpingzhi *xiaopp = new Linpingzhi("Ƨа����");
	//xiaopp->fight();

	Linghuchong *xiaoll = new Linghuchong("���¾Ž�");

	 
	fightPeople(xiaoyy);
	fightPeople(xiaopp);
	fightPeople(xiaoll);
	//������Ĭ������һ����ȫ�Ĵ��� ������Ϊ ���ܴ���ʱ��������Ǹ������
	//���ͳһִ�и���d���� ��ô��һ�����Ա��ɹ�ִ�С�

	delete xiaoyy;
	delete xiaopp;
	delete xiaoll;

	return 0;
}