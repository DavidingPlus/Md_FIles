#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

class jianzhu
{
public:
	jianzhu(string caizhi)

	{
		this->caizhi = caizhi;
	}
	virtual void getcaizhi()
	{
		cout << "�����Ĳ�����:" << caizhi << endl;
	}
	string caizhi;
};

class banfnag : public jianzhu
{
public:
	banfnag(string caizhi) : jianzhu(caizhi)
	{

	}
	virtual void getcaizhi()
	{
		cout << "�巿�Ĳ�����:" << caizhi << endl;
	}
};
class gangjiegou : public jianzhu
{
public:
	gangjiegou(string caizhi) : jianzhu(caizhi)
	{
	
	}
	virtual void getcaizhi()
	{
		cout << "�ֽṹ�Ĳ�����:" << caizhi << endl;
	}
};

void printC(jianzhu *jianzhu)
{
	jianzhu->getcaizhi();
}


int main(void)
{
	jianzhu j("ˮ��");
	banfnag b("ľ��");
	gangjiegou g("�ֲ�");
	printC(&j);
	printC(&b);
	printC(&g);

	printf("\n");
	system("pause");
	return 0;
}