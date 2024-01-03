#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//--------  �����---------
//����CPU��
class CPU
{
public:
	CPU();
	virtual void caculate() = 0;
};

//�����card��
class Card
{
public:
	virtual void display() = 0;
};

//������ڴ���
class Memory
{
public:
	virtual void storage() = 0;
};

//�ܹ���
class Computer
{
public:
	Computer(CPU *cpu, Card *card, Memory *mem)
	{
		this->cpu = cpu;
		this->card = card;
		this->mem = mem;
	}

	void work()
	{
		this->cpu->caculate();
		this->card->display();
		this->mem->storage();
	}

	~Computer() {
		if (this->cpu != NULL) {
			delete this->cpu;
		}
		if (this->card != NULL) {
			delete this->card;
		}
		if (this->mem != NULL) {
			delete this->mem;
		}
	}
private:
	CPU* cpu;
	Card*card;
	Memory *mem;
};
// --------------------------

//-----------ʵ�ֲ�----------
//�����IntelCPU
class IntelCPU :public CPU
{
public:
	virtual void caculate() {
		cout << "Intel CPU��ʼ������" << endl;
	}
};

class IntelCard :public Card
{
public:
	virtual void display() {
		cout << "Intel Card��ʼ��ʾ��" << endl;

	}
};

class IntelMem :public Memory {
public:
	virtual void storage() {
		cout << "Intel mem��ʼ�洢��" << endl;

	}
};

class NvidiaCard :public Card
{
public:
	virtual void display() {
		cout << "Nvidia �Կ���ʼ��ʾ��" << endl;
	}
};

class KingstonMem :public Memory {
public:
	virtual void storage() {
		cout << "KingstonMem ��ʼ�洢��" << endl;
	}
};

//--------------------------



//--------ҵ���-------------------
int main(void)
{
	//1 ��װ��һ̨intelϵ�еĵ���
#if 0
	CPU *intelCpu = new IntelCPU;
	Card *intelCard = new IntelCard;
	Memory *intelMem = new IntelMem;

	Computer *com1 = new Computer(intelCpu, intelCard, intelMem);

	com1->work();

	Card *nCard = new NvidiaCard;
	Memory* kMem = new KingstonMem;

	Computer *com2 = new Computer(intelCpu, nCard, kMem);

	com2->work();

	delete intelCpu;
#endif
	Computer *com1 = new Computer(new IntelCPU, new IntelCard, new IntelMem);
	com1->work();
	delete com1;


	return 0;
}