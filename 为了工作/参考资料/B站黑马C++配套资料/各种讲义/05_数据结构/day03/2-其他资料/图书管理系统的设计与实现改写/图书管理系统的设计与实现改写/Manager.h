#pragma once
#include<string>
using namespace std;

class Manager{

public:
	Manager();
	void Login();			//����Ա��¼
	void reader_1();		//���߹�����溯��
	void reader_add();	//���Ӷ��ߺ���
	void reader_del();	//ɾ�����ߺ���
	void reader_mod();	//�޸Ķ��ߺ���
	void book1();			//�鼮������溯��
	void book_add();		//�����鼮����
	void book_del();		//ɾ���鼮����
	void book_mod();		//�޸��鼮����
	~Manager();
private:
	string Account;
	string Password;
};

class SupManager:public Manager
{
private:
	
public:
	SupManager();
	void manager_1();		//����Ա������溯��
	void manager_add();	//���ӹ���Ա����
	void manager_del();	//ɾ������Ա����
	void manager_mod();	//�޸Ĺ���Ա����
	~SupManager();
};

