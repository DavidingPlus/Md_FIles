#include "SalesMan.h"


SalesMan::SalesMan()
{
	cout << "SaleMan()..." << endl;

}

 void SalesMan::init()
{
	 cout << "����������Ա��������" << endl;
	 cin >> this->name;
	 this->salePercent = 0.04;
}

SalesMan::~SalesMan()
{
	cout << "~SaleMan().." << endl;
}


//�ṩԱ��н�ʵļ��㷽��
void SalesMan::getPay()
{
	cout << "�����뵱�µ����۶�" << endl;
	cin >> this->saleAmount;

	//���㵱�µ���н
	this->salary = this->saleAmount *this->salePercent;
}

//�ṩ�޸�Ա������ķ���
void SalesMan::upLevel(int level)
{
	this->level += level;
	if (this->level == 1) {
		this->salePercent = 0.04;
	}
}
