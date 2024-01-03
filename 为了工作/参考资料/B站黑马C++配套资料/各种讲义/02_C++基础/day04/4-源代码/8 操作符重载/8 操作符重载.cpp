#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;


class Complex
{
public:
	Complex(int a, int b)
	{
		this->a = a;
		this->b = b;
	}

	void printComplex()
	{
		cout << "( " << this->a << ", " << this->b << "i )" << endl;
	}

	friend Complex complexAdd(Complex &c1, Complex &c2);
	//friend Complex operator+(Complex &c1, Complex &c2);
	//friend Complex  operator-(Complex &c1, Complex &c2);

	Complex complexAdd(Complex &another)
	{
		Complex temp(this->a + another.a, this->b + another.b);
		return temp;
	}

	Complex operator+(Complex &another)
	{
		Complex temp(this->a + another.a, this->b + another.b);
		return temp;
	}
	Complex operator-(Complex &another)
	{
		Complex temp(this->a - another.a, this->b - another.b);
		return temp;
	}

private:
	int a;//ʵ��
	int b;//����
};


Complex complexAdd(Complex &c1, Complex &c2)
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}

//����������д��ȫ��
#if 0
Complex operator+(Complex &c1, Complex &c2)
{
	Complex temp(c1.a + c2.a, c1.b + c2.b);
	return temp;
}

Complex operator-(Complex &c1, Complex &c2)
{
	Complex temp(c1.a - c2.a, c1.b - c2.b);
	return temp;
}

#endif

int main(void)
{
	Complex c1(1, 2);
	Complex c2(2, 4);

	c1.printComplex();
	c2.printComplex();

	//Complex c3 = complexAdd(c1, c2);
	//Complex c3 = c1.complexAdd(c2);
	//Complex c3 = c1 + c2; //operator+(c1, c2)  ȫ�ֵĵ��÷�ʽ
						//c1.operator+(c2)
	//Complex c3 = operator+(c1, c2);

	Complex c3 = c1.operator+(c2);

	c3.printComplex();

	Complex c4 = c1 + c2;



	c4.printComplex();


	return 0;
}