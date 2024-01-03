#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;


//�����ͼ����
class Shape
{
public:
	//��ӡ��ͼ�εĻ���������
	virtual void show() = 0;
	//�õ�ͼ�ε����
	virtual double getArea() = 0;

	virtual ~Shape() {

	}
};

//Բ��
class Circle :public Shape
{
public:
	Circle(double r) {
		this->r = r;
	}

	//��ӡ��ͼ�εĻ���������
	virtual void show()  {
		cout << "Բ�İ뾶�� " << r << endl;
	}
	//�õ�ͼ�ε����
	virtual double getArea()  {
		cout << "��ȡԲ�����" << endl;
		return this->r*this->r *3.14;
	}
	~Circle() {
		cout << "Բ��������������" << endl;
	}
private:
	double r;
};

class Square :public Shape
{
public:
	Square(double a) {
		this->a = a;
	}

	//��ӡ��ͼ�εĻ���������
	virtual void show() {
		cout << "�����εı߳���" << this->a << endl;
	}
	//�õ�ͼ�ε����
	virtual double getArea() {
		cout << "�õ������ε����" << endl;
		return a*a;
	}


	~Square() {
		cout << "�����ε���������" << endl;
	}
private:
	double a;
};



int main(void)
{
	Shape *array[2] = { 0 };

	for (int i = 0; i < 2; i++) {
		//����һ��Բ
		if (i == 0) {
			double r;
			cout << "������Բ�İ뾶" << endl;
			cin >> r;
			array[i] = new Circle(r);
		}
		//����һ��������
		else {
			double a;
			cout << "�����������εı߳�" << endl;
			cin >> a;
			array[i] = new Square(a);
		}
	}


	//�������array����
	for (int i = 0; i < 2; i++) {
		array[i]->show();
		cout << array[i]->getArea() << endl;

		delete array[i];
	}

	return 0;
}