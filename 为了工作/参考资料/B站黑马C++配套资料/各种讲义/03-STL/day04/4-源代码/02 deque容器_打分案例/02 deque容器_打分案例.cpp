#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <string>
#include <time.h>
#include <stdlib.h>
using namespace std;

//��ί��ְ���(sort �㷨����)
//���� 5 ��ѡ��(�������÷�) �� 10 ����ί�� 5 ��ѡ�ֽ��д��
//�÷ֹ���ȥ����߷֣�ȥ����ͷ֣�ȡ��ƽ����
//���÷ֶ� 5 ��ѡ�ֽ�������


//ѡ����
class Player{
public:
	Player(){}
	Player(string name,int score):mName(name),mScore(score){}
public:
	string mName;
	int mScore;
};

//����ѡ��
void Create_Player(vector<Player>& v){

	string nameSeed = "ABCDE";
	for (int i = 0; i < 5;i ++){
		
		Player p;
		p.mName = "ѡ��";
		p.mName += nameSeed[i];
		p.mScore = 0;

		v.push_back(p);
	}

}

void PrintScore(int val){
	cout << val << " ";
}

//���
void Set_Score(vector<Player>& v){

	srand(time(NULL));

	for (vector<Player>::iterator it = v.begin(); it != v.end();it ++){
		
		//��ǰѧ�����д��
		deque<int> dScore;
		for (int i = 0; i < 10;i++){
			int score = rand() % 41 + 60;
			cout << score << " ";
			dScore.push_back(score);
		}
		cout << endl;

		//�Է������� Ĭ�ϴ�С����
		sort(dScore.begin(),dScore.end());
		//for_each(dScore.begin(), dScore.end(), PrintScore);
		//cout << endl;

		//ȥ����߷� ȥ����ͷ�
		dScore.pop_front();
		dScore.pop_back();

		//��ƽ����
		int totalScore = 0;
		for (deque<int>::iterator dit = dScore.begin(); dit != dScore.end(); dit++){
			totalScore += (*dit);
		}

		int avgScore = totalScore / dScore.size();
		//�������
		(*it).mScore = avgScore;
	}
}

//�������
bool mycompare(Player& p1,Player& p2){
	return p1.mScore > p2.mScore;
}
//����ѡ�ַ������� sortĬ�ϴ�С���� ϣ���Ӵ�С
void Print_Rank(vector<Player>& v){
	
	//����
	sort(v.begin(), v.end(), mycompare);
	//��ӡ
	for (vector<Player>::iterator it = v.begin(); it != v.end(); it++){
		
		cout << "����:" << (*it).mName << "�÷�:" << (*it).mScore << endl;

	}
}



int main(void){

	//����vector����������ѡ����Ϣ
	vector<Player> vPlist;
	Create_Player(vPlist);
	Set_Score(vPlist);
	Print_Rank(vPlist);
	
	return 0;
}