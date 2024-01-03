#include <boost/asio.hpp>
#include <iostream>
#include <stdlib.h>

using namespace std;
using namespace boost::asio;

void main()
{
	io_service iosev;
	ip::tcp::socket mysorket(iosev);
	ip::tcp::endpoint ep(ip::address_v4::from_string("127.0.0.1"), 1100);

	boost::system::error_code ec;
	mysorket.connect(ep, ec);//����   ����˿ڼ�IP�󶨣�������һ����ַ��δ��ʽ����������������������������

	while (1)
	{
		char str[1024] = { 0 };
		cout << "������";
		cin >> str;
		cout << endl;
		mysorket.write_some(buffer(str), ec);
		memset(str, 0, 1024);//����ַ���
		mysorket.read_some(buffer(str), ec);
		cout << "�յ�" << str << endl

	}

	cin.get();
}
