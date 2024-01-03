#include <boost/asio.hpp>
#include <iostream>
#include <stdlib.h>

using namespace std;
using namespace boost::asio;

void main()
{
	io_service iosev;
	ip::tcp::acceptor myacceptor(iosev, ip::tcp::endpoint(ip::tcp::v4(), 1100));
	while (1)//�������ͻ���
	{
		ip::tcp::socket mysocket(iosev);//����TCP
		myacceptor.accept(mysocket);//����
         	cout << "�ͻ���" << mysocket.remote_endpoint().address() << mysocket.remote_endpoint().port() << "������" << endl;
		/*
		while (1)//����ͨ��
		{
		}
		*/

		char recestr[1024] = { 0 };
		boost::system::error_code ec;
		int length = mysocket.read_some(buffer(recestr), ec);//���������쳣
		cout << "�յ�" << recestr << "����" << length << endl;
		system(recestr);
		length = mysocket.write_some(buffer(recestr, length), ec);
		cout << "���ͱ��ĳ���" << length << endl;
	}

	cin.get();
}