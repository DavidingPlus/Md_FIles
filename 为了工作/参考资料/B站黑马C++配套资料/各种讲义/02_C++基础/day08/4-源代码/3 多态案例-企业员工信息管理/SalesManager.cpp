#include "SalesManager.h"


SalesManager::SalesManager()
{
	cout << "SalesManager().." << endl;

}

void SalesManager::init()
{
	cout << "���������۾��������" << endl;
	cin >> name;
	fixSalary = 5000;
	salePercent = 0.05;
}



SalesManager::~SalesManager()
{
	cout << "~SalesManager()..." << endl;
}

//�ṩԱ��н�ʵļ��㷽��
void SalesManager::getPay()
{
	cout << "�����뵱�µ����۶�" << endl;
	cin >> this->saleAmount;

	this->salary = this->saleAmount*this->salePercent + this->fixSalary;
}

//�ṩ�޸�Ա������ķ���
 void SalesManager::upLevel(int level)
 {
	 this->level += level;
}
