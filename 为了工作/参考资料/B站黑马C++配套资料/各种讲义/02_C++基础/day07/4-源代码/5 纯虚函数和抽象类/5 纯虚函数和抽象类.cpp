#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;


//ͼ����
//���˵һ���� ӵ��һ�����麯�� 
//�ͳ��������һ�������ࡣ
//�������������û�г�Ա���ԣ�ֻҪ������д��麯��������һ�������࣬ ��������ǲ��ܹ�ʵ�����ġ�
class Shape
{
public:
	//��ͼ������ķ���
	//��ʾͼ��������һ������getArea����������һ�����麯����û�к�����ʵ�֡�
	virtual double getArea() = 0;
};

//������
class Tri :public Shape
{
public:
	Tri(int a, int h)
	{
		this->a = a;
		this->h = h;
	}
	virtual double getArea() {
		cout << "�����������" << endl;
		return 0.5*a*h;
	}

private:
	int a;
	int h;
};

//�����Σ�
//���˵һ����ͨ�࣬�̳�ӵ�д��麯�����࣬���˵����д���麯������Ȼ��һ�������ࡣ
//��Ȼ���ܱ�ʵ������ �����ʵ������ ����Ҫ��д������������д��麯��
class Rect : public Shape
{
public:
	Rect(int a) {
		this->a = a;
	}
	virtual double getArea() {
		cout << "�����������" << endl;
		return a*a;
	}
private:
	int a;//�����α߳�
};

class Circle :public Shape
{
public:
	Circle(int r)
	{
		this->r = r;
	}

	virtual double getArea()
	{
		cout << "Բ�������" << endl;

		return 3.14*r * 4;
	}


private:
	int  r;
};


//���������дһ���ܹ�����
void printArea(Shape *sp)
{
	sp->getArea();
}

//ҵ���  ����ĳ�������
int main(void)
{
	//main ������ʹ�õı������� ���� ������Shape�����͡�
	Shape *sp1 = new Rect(10);
	//sp1->getArea();

	Shape *sp2 = new Circle(20);
	//sp2->getArea();

	Shape *sp3 = new Tri(10, 20);
	//sp3->getArea();


	printArea(sp1);
	printArea(sp2);
	printArea(sp3);

	return 0;
}