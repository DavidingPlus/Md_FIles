#pragma once
#include "Manager.h"
#include "SalesMan.h"

class SalesManager :public Manager, public SalesMan
{
public:
	SalesManager();
	~SalesManager();

	virtual void init();

	//�ṩԱ��н�ʵļ��㷽��
	virtual void getPay();

	//�ṩ�޸�Ա������ķ���
	virtual void upLevel(int level);
};

