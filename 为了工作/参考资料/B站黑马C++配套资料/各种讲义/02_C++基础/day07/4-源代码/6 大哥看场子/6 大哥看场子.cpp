#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//��������
class BigBrother
{
public:
	//����ˡ�
	virtual void fightPeople() = 0;
};

//��������
class EastNeverLose :public BigBrother
{
public:
	virtual void fightPeople()  {
		cout << "ʹ���˿�������������" << endl;
	}
};

//������
class Wuyazi :public BigBrother
{
public:
	virtual void fightPeople()  {
		cout << "ʹ�ñ�ڤ�񹦴���" << endl;
	}
};



//boss
int main(void)
{
	BigBrother *bigbrother = new Wuyazi;

	//��������ȥ���ˡ�
	bigbrother->fightPeople();

	delete bigbrother;
	
	return 0;
}