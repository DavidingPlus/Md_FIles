#include <iostream>
#include <string>
#include <boost/bind.hpp>
#include <boost/function.hpp>
#include <vector>
#include <algorithm>
#include <functional>
#include <stdlib.h>

using namespace std;

using namespace boost;



void mainC()
{
    //atoi  //char * to  int
	/*boost::function<int(char *)> fun = atoi;
	cout << fun("123") + fun("234") << endl;
	fun = strlen;
	cout << fun("123") + fun("234") << endl;
*/

	cin.get();
}


void mainD()
{
	/*boost::function<int(char *)> fun = atoi;
	cout << fun("123") + fun("234") << endl;
	fun = boost::bind(strcmp, "ABC", _1);
	cout << fun("123") << endl;
	cout << fun("ABC") << endl;
*/





	cin.get();

}


//
//class manager
//{
//public:
//	void allstart()
//	{
//
//		for (int i = 0; i < 10;i++)
//		{
//			if (workid)
//			{
//				workid(i);
//			}
//		}
//	}
//	void setcallback(boost::function<void(int)> newid)//�󶨵���
//	{
//		workid = newid;
//
//	}
//
// 
//public:
//	boost::function<void(int)> workid;
//};
class worker :public std::binary_function<int, int, void>
{
public:
	void run(int toid)
	{
		id = toid;
		cout << id << "����" << endl;
	}
	void operator ()(int toid,int num)const
	{
		
		cout << toid + num << "����" << endl;
	}
public:
	int id;

};

void   add1(int i, int j)
{
	std::cout << i + j << endl;

}
void main()
{
	//manager m;
	worker w;

	//��ĳ�Ա������Ҫ���������ã�����һ��Ĭ�ϵĶ���
	vector<int> myv;
	myv.push_back(11);
	myv.push_back(23);
	myv.push_back(34);
	for_each(myv.begin(), myv.end(), bind(add1, 113, _1));
	//m.setcallback(boost::bind(&worker::run, &w, _1));
	//m.setcallback(boost::bind(worker(),113,_1));
	//m.allstart();
	//for_each(myv.begin(), myv.end(), bind(&worker::run, &w, 113, _1));
	for_each(myv.begin(), myv.end(), boost::bind(worker(), 113, _1));




	cin.get();
}
