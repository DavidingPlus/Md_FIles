#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//�Ҿ���
class Furniture
{
public:
	int m; //����
};

//��������̳�үү��  �ĳ���̳У� ��ֹ�����ڶ�̳��ҵ�ʱ�򣬳���үү�еı����´����ݡ�
class Bed:virtual public Furniture
{
public:
	void sleep() {
		cout << "�ڴ���˯��" << endl;
	}
};


class Sofa:virtual public Furniture
{
public:
	void sit() {
		cout << "��ɳ������Ϣ" << endl;
	}
};

//ɳ����
class SofaBed :public Bed, public Sofa
{
public:
	void SleepAndSit() {
		sleep();
		sit();
	}
};

int main(void)
{
	Bed b;
	b.sleep();

	Sofa s;
	s.sit();

	cout << " ------ " << endl;

	SofaBed sb;
	sb.SleepAndSit();

	sb.m = 100;//��ʱֻ��һ��m
	//sb.Bed::m = 100;
	//sb.Sofa::m = 200;
	
	return 0;
}