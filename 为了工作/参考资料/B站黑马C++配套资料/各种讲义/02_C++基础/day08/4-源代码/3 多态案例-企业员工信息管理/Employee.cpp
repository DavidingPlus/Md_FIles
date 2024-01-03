#include "Employee.h"

int Employee::startNum = 1000;


Employee::Employee()
{
	cout << "Employee()..." << endl;
	id = startNum++;
	level = 1;
	salary = 0.0;
}


Employee::~Employee()
{
	cout << "~Employee().." << endl;
}


void Employee::displayStatus()
{
	cout << "Ա������" << this->name << endl;
	cout << "Ա���ļ���" << this->level << endl;
	cout << "Ա������н " << this->salary << endl;
	cout << "Ա����ID" << this->id << endl;
}