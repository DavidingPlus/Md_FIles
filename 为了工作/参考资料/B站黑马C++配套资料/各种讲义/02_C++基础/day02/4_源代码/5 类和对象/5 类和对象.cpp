#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;


struct Hero
{
	char name[64];
	int sex;
};

void printHero(struct Hero &h)
{
	cout << "Hero" << endl;

	cout << "name = " << h.name << endl;
	cout << "sex = " << h.sex << endl;
}

class AdvHero
{
public://���ʿ���Ȩ��
	char name[64];
	int sex;

	void printHero()
	{
		cout << "advHero" << endl;
		cout << "name = " << name << endl;
		cout << "sex = " << sex << endl;
	}
};


class Animal
{
	//{}���� ������ڲ��� ���������ⲿ
public:
	char kind[64];
	char color[64];

//��public���涨���Ա�����ͺ��� ���ܹ�������ڲ����ⲿ�����Է��ʵġ�
	void printAnimal()
	{
		cout << "kind = " << kind << endl;
		cout << "color = " << color << endl;
	}

	void write()
	{
		cout << kind << "��ʼЬ����" << endl;
	}
	void run()
	{
		cout << kind << "��������" << endl;
	}

	//
private:
	//��private���涨��ĳ�Ա�����ͷ���ֻ�ܹ�������ڲ�����
	
};

int main(void)
{
	Hero h;

	strcpy(h.name, "gailun");
	h.sex = 1;
	printHero(h);



	AdvHero advH;
	strcpy(advH.name, "ChunBro");
	advH.sex = 1;

	advH.printHero();

	cout << "-----------" << endl;
	Animal dog;

	strcpy(dog.kind, "dog");
	strcpy(dog.color, "yellow");

	Animal sheep;

	strcpy(sheep.kind, "sheep");
	strcpy(sheep.color, "white");

	

	dog.write();
	sheep.run();

	return 0;
}