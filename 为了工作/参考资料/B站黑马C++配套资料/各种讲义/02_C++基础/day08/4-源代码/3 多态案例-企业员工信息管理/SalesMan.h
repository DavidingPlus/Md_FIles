#pragma once
#include "Employee.h"
class SalesMan : virtual public Employee
{
public:
	SalesMan();
	~SalesMan();

	//�ṩԱ��н�ʵļ��㷽��
	virtual void getPay();

	virtual void init();

	//�ṩ�޸�Ա������ķ���
	virtual void upLevel(int level);

protected:
	//���µ����۶�
	int saleAmount;
	//��ɵı���
	double salePercent;
};

