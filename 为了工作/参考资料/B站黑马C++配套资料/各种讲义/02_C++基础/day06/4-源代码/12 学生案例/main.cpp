#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;

//

class  Girl
{
public:

	int  fangyu()
	{
		return 10;
	}

};


class Boy
{
public:
	virtual int fight()
	{
		return 5;
	}

};

class higBoy:public Boy
{
public:
	virtual int fight()
	{
		return 10;
	}

};

class bugBoy :public Boy
{
public:
	virtual int fight()
	{
		return 20;
	}

};

//ս������
void catchGirl(Boy &bp, Girl &mp)
{
	if (bp.fight() > mp.fangyu()) { //hp->getAd �����˶�̬
		cout << "Ů����׷����" << endl;
	}
	else {
		cout << "û׷��" << endl;
	}
}


int main(void)
{

	Girl mp;

	Boy b1;
	higBoy b2;
	bugBoy b3;

	catchGirl(b1, mp);
	catchGirl(b2, mp);
	catchGirl(b3, mp);


	system("pause");
	return 0;
}