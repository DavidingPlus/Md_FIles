#include <iostream>
#include <string>

using namespace std;

class People
{
public:
	People(){}
	People(string name)
	{
		this->name = name;
	}
	virtual void go()
	{
	}
	string name;
};

class Coder:public People
{
public:
	Coder(string name, string cl) :People(name)
	{
		computer_language = cl;
	}
	virtual void go()
	{
		cout << name << "ʹ��" << computer_language << "д�˸�����" << endl;
	}
	string computer_language;
};

class Singer :public People
{
public:
	Singer(string name, string st, string sn) :People(name)
	{
		song_name = sn;
		song_type = st;
	}
	virtual void go()
	{
		cout << name << "ϲ��" << song_type << "����" << endl;
		cout << "������<" << song_name << ">" << endl;
	}
	string song_type;
	string song_name;
};

void peoper_go(People &p)
{
	p.go();
}

int main(void)
{
	Coder c("����", "c++");
	Singer s("����", "ҡ��", "Ұ��");

	peoper_go(c);
	cout << "--------------" << endl;
	peoper_go(s);
	return 0;
}