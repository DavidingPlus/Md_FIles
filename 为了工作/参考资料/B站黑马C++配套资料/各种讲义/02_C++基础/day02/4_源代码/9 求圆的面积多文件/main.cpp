#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include "Circle.h"

using namespace std;

int main(void)
{
	Circle c;
	c.setR(10);

	cout << "���" << c.getArea() << endl;


	return 0;
}