#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Animal
{
public:
	//���麯����������̳в���ʵ��
	virtual void voice() = 0;
	Animal();
	virtual ~Animal();
};


//�ܹ�����
//�ö����
void letAnimalCry(Animal *animal);
