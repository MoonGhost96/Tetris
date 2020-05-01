#include "Frame.h"



Frame::Frame()
{
}
Frame::~Frame()
{
}
void Frame::Draw_border()
{
Tool T;
	for (int i = LEFT; i <= RIGHT3; ++i)
	{
		T.gotoxy(i, UP);
		std::cout << "*";                                                  //�߽��������õ�*��
		T.gotoxy(i, BUTTOM);
		std::cout << "*";
	}
	for (int i = RIGHT; i <= RIGHT3; ++i)
	{
		T.gotoxy(i, MIDDLE1);
		std::cout << "*";
		T.gotoxy(i, MIDDLE2);
		std:: cout << "*";
	}
	for (int i = UP; i <= BUTTOM; ++i)
	{
		T.gotoxy(LEFT, i);  std::cout << "*";
		T.gotoxy(RIGHT, i); std::cout << "*";
		T.gotoxy(RIGHT3, i); std::cout << "*";
	}
	for (int i = UP; i <= MIDDLE2; ++i)
	{
		T.gotoxy(RIGHT2, i); std::cout << "*";
	}
	T.gotoxy(0, 0);
}

void Frame::Draw_message(std::string name)
{
	Tool T;
	T.gotoxy(RIGHT2 + 1, UP + 2);
	std::cout << "��Ϸ���ƣ�";
	T.gotoxy(RIGHT2 + 1, UP + 3);
	std::cout << "����˹����";
	T.gotoxy(RIGHT2 + 1, UP + 4);
	std::cout << "�����ߣ�";
	T.gotoxy(RIGHT2 + 1, UP + 5);
	std::cout << "��־";
	T.gotoxy(RIGHT2 + 1, UP + 6);
	std::cout << "�޸��ߣ��ƽ��";
	T.gotoxy(RIGHT + 1, MIDDLE2 + 1);
	std::cout << "ͨ��AD�����Ʒ���";
	T.gotoxy(RIGHT + 1, MIDDLE2 + 2);
	std::cout <<"ͨ��R����ת��S���ٽ�";
	T.gotoxy(RIGHT2 + 1, MIDDLE1 + 2);
	std::cout << "������ƣ�";
	T.gotoxy(RIGHT2 + 1, MIDDLE1 + 3);
	std::cout << name;
}

void Frame::Draw_score(int score, int level)
{
	Tool T;
	T.gotoxy(RIGHT + 1, MIDDLE1 + 1); std::cout << "��ǰ�÷֣�";
	T.gotoxy(RIGHT + 1, MIDDLE1 + 2); std::cout << "   ";
	T.gotoxy(RIGHT + 1, MIDDLE1 + 2); std::cout << score;
	T.gotoxy(RIGHT + 1, MIDDLE1 + 3); std::cout << "��ǰ�ؿ���";
	T.gotoxy(RIGHT + 1, MIDDLE1 + 4); std::cout << "   ";
	T.gotoxy(RIGHT + 1, MIDDLE1 + 4); std::cout << level;
}
