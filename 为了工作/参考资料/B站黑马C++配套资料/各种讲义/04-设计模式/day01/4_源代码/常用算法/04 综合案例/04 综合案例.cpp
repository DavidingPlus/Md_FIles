#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <deque>
#include <time.h>
using namespace std;

class Player{
public:
	string mName;
	int mScore[3];
};

//����ѡ��
void Create_Player(map<int, Player>& mPlist, vector<int>& v1){

	string seedName = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for (int i = 0; i < 24;i++){
		Player p;
		p.mName = "ѡ��";
		p.mName += seedName[i];

		for (int j = 0; j < 3; j++){
			p.mScore[j] = 0;
		}

		int uID = 100 + i;
		mPlist.insert(make_pair(uID,p)); //����ѡ�ָ�����Ϣ
		v1.push_back(uID);
	}

}

//ѡ�ֳ�ǩ
void Set_Random(vector<int>& v){
	random_shuffle(v.begin(), v.end());
}

//����
void Set_Score(int index, vector<int>& vIn, map<int, Player>& mPlist, vector<int>& vOut){

	srand((unsigned int)time(NULL));
	//��һ��int ���������ݷ����Զ�����
	//�ڶ���int ���
	multimap<int, int ,greater<int>> mGroup;  //Ĭ���Ǹ��ݷ��� ��С����
	//int groupIndex = 0;
	for (vector<int>::iterator it = vIn.begin(); it != vIn.end();it ++){
		
		//���
		deque<int> dScore;
		for (int i = 0; i < 10;i++){
			int score = rand() % 40 + 60;
			dScore.push_back(score);
		}
		//����
		sort(dScore.begin(),dScore.end());
		//ȥ����� ��ͷ�
		dScore.pop_back();
		dScore.pop_front();
		//��ƽ����
		int totaoScore = accumulate(dScore.begin(), dScore.end(), 0);
		int avgScore = totaoScore / dScore.size();

		mPlist[*it].mScore[index - 1] = avgScore;
		//�ѵ�ǰѡ�ֱ�ŷŵ�mGroup
		mGroup.insert(make_pair(avgScore,*it));
		//groupIndex++;
		if (mGroup.size() == 6){
			
			int numIndex = 0;
			for (multimap<int, int>::iterator mit = mGroup.begin(); mit != mGroup.end();mit ++){
				if (numIndex >= 3){
					break;
				}
				vOut.push_back((*mit).second);
				numIndex++;
			}

			mGroup.clear();
		}
	}

}

//��ӡ��������
void Show_Good_Player(int index, vector<int>& v, map<int, Player>& mPlist){

	cout << "��" << index << "�ֽ�������:" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it ++){
		cout << "����:" << mPlist[*it].mName << "  ����:" << mPlist[*it].mScore[index - 1] << endl;
	}

}
int main(void){

	//����map����  ���ݱ�ű���ѡ����Ϣ
	map<int, Player> mPlist;
	//��һ�ֱ��������б�
	vector<int> v1; //24���� ����12��
	//�ڶ��ֱ��������б�
	vector<int> v2; //12���� ���� 6����
	//�����ֱ����Ĳ����б�
	vector<int> v3; // 6���� ����3���� 
	//���յ�ǰ����
	vector<int> v4; //���ǰ����

	//����ѡ��
	Create_Player(mPlist, v1);

	//��һ�ֱ���
	Set_Random(v1);
	Set_Score(1,v1, mPlist,v2);
	Show_Good_Player(1, v2, mPlist);

	//�ڶ��ֱ���
	Set_Random(v2);
	Set_Score(2, v2, mPlist, v3);
	Show_Good_Player(2, v3, mPlist);

	//�����ֱ���
	Set_Random(v3);
	Set_Score(3, v3, mPlist, v4);
	Show_Good_Player(3, v4, mPlist);

	
	return 0;
}