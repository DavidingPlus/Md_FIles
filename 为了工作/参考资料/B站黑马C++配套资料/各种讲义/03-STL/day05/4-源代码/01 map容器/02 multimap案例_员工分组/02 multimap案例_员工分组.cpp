#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

#define SALE_DEPATMENT 1 //���۲���
#define DEVELOP_DEPATMENT 2 //�з�����
#define FINACIAL_DEPATMENT 3 //������

//multimap ����
//��˾������Ƹ�� 5 ��Ա���� 5 ��Ա�����빫˾֮����Ҫָ��Ա�����Ǹ����Ź���
//��Ա��Ϣ��: ���� ���� �绰 ���ʵ����
//ͨ�� Multimap ������Ϣ�Ĳ��� ���� ��ʾ
//�ֲ�����ʾԱ����Ϣ ��ʾȫ��Ա����Ϣ

class Worker{
public:
	string mName;
	string mTele;
	int mAge;
	int mSalary;
};

void Create_Worker(vector<Worker>& vWorker){
	string seedName = "ABCDE";
	for (int i = 0; i < 5;i ++){
		Worker worker;
		worker.mName = "Ա��";
		worker.mName += seedName[i];

		worker.mAge = rand() % 10 + 20;
		worker.mTele = "010-8888888";
		worker.mSalary = rand() % 10000 + 10000;
		//����Ա����Ϣ
		vWorker.push_back(worker);
	}

}
//Ա������
void WorkerByGroup(vector<Worker>& vWorker, multimap<int, Worker>& workerGroup){
	//��Ա��������䲻ͬ����
	srand(time(NULL));
	for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end();it ++){
		
		int departID = rand() % 3 + 1;
		switch (departID){
		case SALE_DEPATMENT:
			workerGroup.insert(make_pair(SALE_DEPATMENT,*it));
			break;
		case DEVELOP_DEPATMENT:
			workerGroup.insert(make_pair(DEVELOP_DEPATMENT, *it));
			break;
		case FINACIAL_DEPATMENT:
			workerGroup.insert(make_pair(FINACIAL_DEPATMENT, *it));
			break;
		default:
			break;
		}
	}
}

void ShowGroupWorkers(multimap<int, Worker>& workerGroup, int departID){
	multimap<int, Worker>::iterator it = workerGroup.find(departID);
	//�ҵ�ǰ����������
	int DepartCount = workerGroup.count(departID);
	int num = 0;
	for (multimap<int, Worker>::iterator pos = it; it != workerGroup.end() && num < DepartCount; pos++, num++){
		cout << "����:" << pos->second.mName << " ����:" << pos->second.mAge << " �绰:" << pos->second.mTele << " ����:" << pos->second.mSalary << endl;
	}
}

//��ӡÿһ����Ա����Ϣ
void PrintWorkerByGroup(multimap<int, Worker>& workerGroup){

	//��ӡ���۲�Ա����Ϣ
	
	//��ʾ���۲���
	cout << "���۲���:" << endl;
	ShowGroupWorkers(workerGroup,SALE_DEPATMENT);
	//��ʾ��������
	cout << "�з�����:" << endl;
	ShowGroupWorkers(workerGroup, DEVELOP_DEPATMENT);
	//��ʾ������
	cout << "������:" << endl;
	ShowGroupWorkers(workerGroup, FINACIAL_DEPATMENT);


}




int main(void){

	//�����Ա������Ϣ
	vector<Worker> vWorker;
	//multimap���������Ϣ
	multimap<int, Worker> workerGroup;
	//����Ա��
	Create_Worker(vWorker);
	//Ա������
	WorkerByGroup(vWorker, workerGroup);
	//��ӡÿһ����Ա����Ϣ
	PrintWorkerByGroup(workerGroup);

	
	return 0;
}