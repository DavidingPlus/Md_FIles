#pragma once
#include "Employee.h"


class Technician : public Employee
{
public:
	Technician();
	~Technician();

	virtual void init();

	//�ṩԱ��н�ʵļ��㷽��
	virtual void getPay();

	//�����ķ���
	virtual void upLevel(int level);
private:
	//һ���¹����˶���Сʱ
	int workHour;
	//ÿСʱ��Ǯ
	double perHourMoney;
};

