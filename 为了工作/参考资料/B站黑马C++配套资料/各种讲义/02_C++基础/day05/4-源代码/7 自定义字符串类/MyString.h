#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyString
{
public:
	MyString();
	//MyString(int len); //����һ��������len��string����
	MyString(const char *str);
	MyString(const MyString &another);
	~MyString();

	//���ز�����[]
	char &operator[](int index);



	//���ز�����>>
	friend istream & operator>>(istream &is, MyString &s);

	//����=������
	MyString & operator=(const MyString &another);

	//����==������

	//����!=������


	//����+������
	MyString operator+(MyString &another);


	//���ز�����<<
	friend ostream & operator<<(ostream &os, MyString&s);

private:
	int len;
	char *str;
};

