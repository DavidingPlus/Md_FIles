//��дһ��C++����, �������Ա(programmer)����
//1 Ҫ���ܼ������������Ա(junior_programmer) �м�����Ա(
//mid_programmer)�߼�����Ա(adv_programmer)�Ĺ���
//2 Ҫ�����ó�����ͳһ����, ����������չ, ����:����, ���� �ܹ�ʦ
//(architect) �Ĺ���

#define _CRT_SECURE_NO_WARNINGS
#include"iostream"
using namespace std;
#include"adv_programmer.h"
#include"mid_programmer.h"
#include"junior_programmer.h"


int main()
{
	programmer *pp=NULL;
	adv_programmer *ap = new adv_programmer;
	junior_programmer *jp = new junior_programmer;
	mid_programmer *mp = new mid_programmer;
	GetSalary(ap);
	ap = NULL;
	GetSalary(jp);
	jp = NULL;
	GetSalary(mp);
	mp = NULL;
	system("pause");
	return 0;
}