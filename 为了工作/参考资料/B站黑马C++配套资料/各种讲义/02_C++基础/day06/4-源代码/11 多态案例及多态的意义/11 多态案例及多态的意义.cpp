#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//Ӣ����
//1999
class Hero
{
public:
	virtual int getAd() {
		return 10;
	}
};

//1999
class AdvHero :public Hero
{
public:
	virtual int getAd()
	{
		return 1001;
	}
};

//������
//1999
class Monster
{
public:
	int getAd() {
		return 1000;
	}
};


//ս������
//1999 //д�ļܹ����������Ե���δ����
void playerFight(Hero *hp, Monster *mp)
{
	//��̬���ڱ����������ģ�Ҳ��һ����̬���࣬Ҳ��һ���ٰ��
	if (hp->getAd() > mp->getAd()) { //hp->getAd �����˶�̬
		cout << "Ӣ��ʤ���� ���ޱ�����" << endl;
	}
	else {
		cout << "Ӣ�۹��ˣ�����Ӯ��" << endl;
	}
}

//2020��
class BugHero :public Hero
{
public:
	virtual int getAd()
	{
		cout << "������bugHero�ķ���" << endl;
		return 66666;
	}
};

int main(void)
{
	Hero h;

	Monster m;

	playerFight(&h, &m);


	AdvHero advH;

	playerFight(&advH, &m);


	BugHero bH;

	playerFight(&bH, &m);

	int a = 10;
	int b = 20;

	cout << a << endl;

	if (a > 10) { //�ٰ
		cout << "a>10" << endl;
	}
	else {
		cout << "a < 10" << endl;
	}


	return 0;
}