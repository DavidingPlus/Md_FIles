#pragma once
#include "Employee.h"


class Manager : virtual public Employee
{
public:
	Manager();
	~Manager();

	//�ṩһ����ʵ�ĳ�ʼ��Ա���ĺ���
	virtual void init();

	virtual void getPay();

	//�ṩ�޸�Ա������ķ���
	virtual void upLevel(int level);

protected:
	double fixSalary;//����Ĺ̶�����
};

