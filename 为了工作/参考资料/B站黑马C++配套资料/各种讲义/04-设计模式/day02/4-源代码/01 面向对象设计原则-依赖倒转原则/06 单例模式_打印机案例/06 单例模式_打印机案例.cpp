#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Printer{
private:
	Printer(){
		mCnt = 0;
	}
public:
	static Printer* getInstance(){
		return pPrinter;
	}

	//�ṩ��ӡ�ӿ�
	void print(string content){
		cout << "��ӡ����Ϊ:" << content << endl;
		mCnt++;
	}
	int getCnt(){
		return this->mCnt;
	}
private:
	static Printer* pPrinter;
	int mCnt; //ͳ�ƴ�ӡ����
};

Printer* Printer::pPrinter = new Printer;

void test01(){
	
	Printer* printer = Printer::getInstance();
	printer->print("hello world1!");
	printer->print("hello world2!");
	printer->print("hello world3!");

	cout << "��ӡ����ӡ����:" << printer->getCnt() << endl;

}

int main(void){
	test01();
	return 0;
}