#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

class Student
{
public:
	Student()
	{
		this->id = 0;
		this->name = NULL;
	}

	Student(int id, char *name)
	{
		this->id = id;

		//this->name = name;
		int len = strlen(name);
		this->name = new char[len + 1];
		strcpy(this->name, name);
	}

	Student(const Student &another)
	{
		this->id = another.id;

		//���
		int len = strlen(another.name);
		this->name = new char[len + 1];
		strcpy(this->name, another.name);
	}

	Student & operator=(const Student &another)
	{
		//1 ��ֹ����ֵ
		if (this == &another) {
			return *this;
		}

		//2 �Ƚ�����Ķ��⿪�ٵĿռ���յ�
		if (this->name != NULL) {
			delete[] this->name;
			this->name = NULL;
			this->id = 0;
		}

		//3 ִ�����
		this->id = another.id;

		int len = strlen(another.name);
		this->name = new char[len + 1];
		strcpy(this->name, another.name);


		//4 ���ر���
		return *this;
	}

	void printS()
	{
		cout << name << endl;
	}

	~Student() {
		if (this->name != NULL) {
			delete[] this->name;
			this->name = NULL;
			this->id = 0;
		}
	}
private:
	int id;
	char *name;
};

int main(void)
{

	Student s1(1, "zhang3");
	Student s2(s1); 

	s2 = s1;

	Student s3(2, "li4");

	
	//s2 = s3 = s1;//s2 = ��ֵ������



	s1.printS();
	s2.printS();
	s3.printS();


	return 0;
}