#include "Manager.h"


Manager::Manager()
{
	cout << "Manager().." << endl;

}

void Manager::init()
{
	cout << "�����뾭�������" << endl;
	cin >> name;
	this->fixSalary = 8000;
}



Manager::~Manager()
{
	cout << "~Manager().." << endl;
}


void Manager::getPay()
{
	//����нˮ�ķ�ʽ
	this->salary = this->fixSalary;
}

//�ṩ�޸�Ա������ķ���
void Manager::upLevel(int level) {
	this->level += level;

	if (this->level == 1) {
		this->fixSalary = 8000;
	}
	else if(this->level == 2){
		this->fixSalary = 10000;
	}
}
