#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v){
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
		cout << *it << " ";
	}
	cout << endl;
}

//��ʼ��
void test01(){

	vector<int> vl;//Ĭ�Ϲ���

	int arr[] = { 10, 20, 30, 40 };
	vector<int> v2(arr,arr + sizeof(arr)/sizeof(int));
	vector<int> v3(v2.begin(), v2.end());
	vector<int> v4(v3);
	
	printVector(v2);
	printVector(v3);
	printVector(v4);
}

//���ø�ֵ����
void test02(){

	
	int arr[] = { 10, 20, 30, 40 };
	vector<int> vl1(arr,arr+sizeof(arr)/sizeof(int));//Ĭ�Ϲ���

	//��Ա����
	vector<int> v2;
	v2.assign(vl1.begin(), vl1.end());

	//����=
	vector<int> v3;
	v3 = v2;

	int arr1[] = { 100, 200, 300, 400 };
	vector<int> v4(arr1, arr1 + sizeof(arr) / sizeof(int));//Ĭ�Ϲ���

	printVector(vl1);
	printVector(v2);
	printVector(v3);
	printVector(v4);

	cout << "------------------" << endl;

	v4.swap(vl1);
	printVector(vl1);
	printVector(v2);
	printVector(v3);
	printVector(v4);

}

//��С����
void test03(){
	
	int arr1[] = { 100, 200, 300, 400 };
	vector<int> v4(arr1, arr1 + sizeof(arr1) / sizeof(int));//Ĭ�Ϲ���

	cout << "size��" << v4.size() << endl;
	if (v4.empty() == true){
		cout << "�գ�" << endl;
	}
	else{
		cout << "���գ�" << endl;
	} 

	printVector(v4);
	v4.resize(2);
	printVector(v4);
	//v4.resize(6);
	printVector(v4);
	v4.resize(6,1); 
	printVector(v4);

	for (int i = 0; i < 10000; i++){
		v4.push_back(i);
	}
	cout << "size��" << v4.size() << endl;  //Ԫ�صĸ��� 20
	cout << "����:" << v4.capacity() << endl; //���� 100


}

//vector��ȡ����
void test04(){
	
	int arr1[] = { 100, 200, 300, 400 };
	vector<int> v4(arr1, arr1 + sizeof(arr1) / sizeof(int));//Ĭ�Ϲ���

	for (int i = 0; i < v4.size();i++){
		cout << v4[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < v4.size(); i++){
		cout << v4.at(i) << " ";
	}
	cout << endl;


	//����: at���쳣 []�����쳣

	cout << "front:" << v4.front() << endl;
	cout << "back:" << v4.back() << endl;
}

//�����ɾ��
void test05(){
	
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	//ͷ�巨
	v.insert(v.begin(),30);
	v.insert(v.end(),40);

	v.insert(v.begin() + 2, 100); //vector֧���������

	//֧�������±꣬һ�㶼֧���������
	//����������ֱ��+2 +3 -2 -5����
	printVector(v);

	//ɾ��
	v.erase(v.begin());
	printVector(v);
	v.erase(v.begin() + 1, v.end());
	printVector(v);
	v.clear();
	cout << "size:" << v.size() << endl;
}

//����swap�����ռ�
void test06(){

	//vector���Ԫ�� �����Զ����� ��ɾ��Ԫ��ʱ�򣬻��Զ�������

	vector<int> v;
	for (int i = 0; i < 100000; i ++){
		v.push_back(i);
	}

	cout << "size:" << v.size() << endl;
	cout << "capacity:" << v.capacity() << endl;

	v.resize(10);
	cout << "--------------" << endl;
	cout << "size:" << v.size() << endl;
	cout << "capacity:" << v.capacity() << endl;

	//�����ռ�
	vector<int>(v).swap(v);

	cout << "--------------" << endl;
	cout << "size:" << v.size() << endl;
	cout << "capacity:" << v.capacity() << endl;
}

void test07(){
	
	//reserve Ԥ���ռ� resize����

	int num = 0;
	int* address = NULL;

	vector<int> v;
	v.reserve(100000);
	for (int i = 0; i < 100000;i++){
		v.push_back(i);
		if (address != &(v[0])){
			address = &(v[0]);
			num++;
		}
	}

	cout << "num:" << num << endl;

	//�����֪���������Ҫ�洢��Ԫ�ظ�������ô�������reserveԤ���ռ�
}



int main(void){

	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	//test06();
	test07();


	return 0;
}