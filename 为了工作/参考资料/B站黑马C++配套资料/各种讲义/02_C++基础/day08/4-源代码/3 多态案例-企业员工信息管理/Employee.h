#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;


//�����Ա�� 
class Employee
{
public:
	Employee();
	virtual ~Employee();

	//�ṩһ����ʵ�ĳ�ʼ��Ա���ĺ���
	virtual void init() = 0;

	//�ṩԱ��н�ʵļ��㷽��
	virtual void getPay() = 0;
	//��ʾԱ������Ϣ
	void displayStatus();
	//�ṩ�޸�Ա������ķ���
	virtual void upLevel(int level) = 0;

protected:
	string name;//����
	int id;//���
	double salary;//н��
	int level;//����

	//Ա���ı�Ż���ֵ
	static int startNum;
};

