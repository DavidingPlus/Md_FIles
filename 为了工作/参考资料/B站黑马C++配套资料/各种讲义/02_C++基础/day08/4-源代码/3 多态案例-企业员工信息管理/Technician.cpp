#include "Technician.h"


Technician::Technician()
{
	cout << "Technician().." << endl;

}

void Technician::init()
{
	cout << "������Ա��������" << endl;
	cin >> name;
	perHourMoney = 100;//Ĭ��Ա��ÿСʱ׬100Ԫ
}


Technician::~Technician()
{
	cout << "~Technician()..." << endl;
}

//�ṩԱ��н�ʵļ��㷽��
void Technician::getPay()
{
	cout << "�������Ա�� һ�������˶���Сʱ" << endl;
	cin >> workHour;

	this->salary = this->perHourMoney * this->workHour;
}

//�����ķ���
void Technician::upLevel(int level)
{
	this->level += level;

}

