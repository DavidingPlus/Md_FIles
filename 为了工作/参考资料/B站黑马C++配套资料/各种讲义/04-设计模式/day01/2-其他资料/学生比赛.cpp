#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <time.h>
#include <stdlib.h>
#include <deque>
#include <functional>
#include <numeric>


using namespace std;

class Player {
public:
	string mName;
	int mScore[3];
	//Player() {}
	Player(const string &name)
	{
		this->mName = name;
		for (int i = 0; i < 3; i++)
		{
			mScore[i] = 0;
		}
	}
};

//����ѡ��
void Create_Player(map<int, Player>& mPlist, vector<int>& v1) {

	for (int i = 0; i < 24; i++)
	{
		string name = "ѡ��";
		name += 65 + i;
		Player player(name);
		pair<int, Player> a(i + 1, player);
		mPlist.insert(a);
		v1.push_back(i + 1);
	}
}

//ѡ�ֳ�ǩ
void Set_Random(vector<int>& v1) {

	random_shuffle(v1.begin(), v1.end());
}


//����
//void Set_Score(int index, vector<int>& v1, map<int, Player>& mPlist, vector<int>& v2) {
//
//	int count = v1.size();
//	//keyΪ����, valueΪѡ�ֱ��
//	multimap<int, int,greater<int>> mGroup;//Ĭ�ϴ�С��������,������ȡ�õ��ǵ�����
//	for (int i = 0; i < count; i++)
//	{
//		//���
//		deque<int> score;
//		for (int j = 0; j < 10; j++)
//		{
//			score.push_back(60 + rand() % 41);
//		}
//
//		//ȥ����߷ֺ���ͷ�ȡ��ƽ����
//		sort(score.begin(), score.end());
//		score.pop_back();
//		score.pop_front();
//		int accum = accumulate(score.begin(), score.end(), 0);
//		int ave = accum / score.size();
//
//
//		mPlist[v1[i]].mScore[index-1] = ave;
//
//		//���������ȡ��---����һ��map,�ڲ����ʱ��,������
//		mGroup.insert(make_pair(ave, v1[i]));
//		//����һ��6��,��ȡ��ǰ����
//		if (mGroup.size() == 6)
//		{
//			int count = 0;
//				for (multimap<int, int>::iterator it = mGroup.begin(); it != mGroup.end(); it++)
//				{
//					if (count < 3)
//					{
//						v2.push_back((*it).second);
//						count++;
//					}
//				}
//			mGroup.clear();
//		}
//	}
//
//
//
//}

//��ӡ��������
void Show_Good_Player(int index, vector<int>& v2, map<int, Player>& mPlist) {

	cout << "��" << index << "��ѡ�ֽ�������" << endl;

	for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
	{
		cout << *it << " ";
		cout << mPlist[*it].mName << " ����: " << mPlist[*it].mScore[index-1] << endl;
	}
	cout << endl;
}
int main(void) {

	srand((unsigned int) time(NULL));
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


	////��һ�ֱ���
	//Set_Random(v1);
	//Set_Score(1, v1, mPlist, v2);
	//Show_Good_Player(1, v2, mPlist);

	////�ڶ��ֱ���
	//Set_Random(v2);
	//Set_Score(2, v2, mPlist, v3);
	//Show_Good_Player(2, v3, mPlist);

	////�����ֱ���
	//Set_Random(v3);
	//Set_Score(3, v3, mPlist, v4);
	//Show_Good_Player(3, v4, mPlist);


	system("pause");
	return 0;
}