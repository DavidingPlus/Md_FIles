#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


using namespace std;
//-------------�����------------
//����𿪽��ҷ��������͡�
typedef void(TIPS)(void);

//�������
struct tip
{
	char from[64]; //˭д��
	char to[64];//д��˭�ġ�
	//���ҵ�����
	TIPS *tp;//�൱�ڳ������ ���麯��.
};

//��Ҫһ���򿪽��ҵļܹ�����
void open_tips(struct tip *tip_p)
{
	cout << "���˽���" << endl;
	cout << "�˽�������" << tip_p->from << "д�� " << tip_p->to << "�ġ�" << endl;
	cout << "������" << endl;
	tip_p->tp(); //��ʱ�ͷ����˶�̬����
}

//�ṩһ������һ�����ҵķ���
struct tip* create_tip(char*from, char *to, TIPS*tp)
{
	struct tip *temp = (struct tip*)malloc(sizeof(struct tip));
	if (temp == NULL) {
		return NULL;
	}
	strcpy(temp->from, from);
	strcpy(temp->to, to);
	//��һ���ص�������ֵ�� һ��� ע��ص�����
	temp->tp = tp;

	return temp;
}

//�ṩһ�����ٽ��ҵķ���
void destory_tip(struct tip *tp)
{
	if (tp != NULL) {
		free(tp);
		tp = NULL;
	}
}


// ------------- ʵ�ֲ�------------
//�����д��3������
void tip1_func(void)
{
	cout << "һ������Ͱݻ��ǹ���" << endl;
}

void tip2_func(void)
{
	cout << "��������ֲ�˼�񣬾ͻѳƲ�����Ϯ���Ͻ����� " << endl;
}

void tip3_func(void)
{
	cout << "�������Ȩ׷ɱ�������������" << endl;
}

void tip4_func(void)
{
	cout << "�����������㶼���飬  ����ȥ���ˣ� ��������ϴ���" << endl;
}


//---------------  ҵ���-----------------
int main(void)
{
	//������3������
	struct tip *tip1 = create_tip("����", "����", tip1_func);
	struct tip *tip2 = create_tip("����", "����", tip2_func);
	struct tip *tip3 = create_tip("����", "����", tip3_func);
	struct tip *tip4 = create_tip("��ͳ", "����", tip4_func);

	//�����ƽ��в���ҡ�
	cout << "�ո��������⣬ ���ƴ򿪵�һ������" << endl;
	open_tips(tip1);
	cout << "-----------" << endl;

	cout << "�����ֲ�˼�� ���ƴ򿪵ڶ�������" << endl;
	open_tips(tip2);
	cout << "-----------" << endl;

	cout << "��Ȩ���׷ɱ�����ƴ򿪵���������" << endl;
	open_tips(tip3);
	cout << "-----------" << endl;

	cout << "���Ʒ��֣�ʵ����ɱ�����ˣ� ���˵��ĸ�����" << endl;
	open_tips(tip4);

	destory_tip(tip1);
	destory_tip(tip2);
	destory_tip(tip3);
	destory_tip(tip4);
	
	return 0;
}