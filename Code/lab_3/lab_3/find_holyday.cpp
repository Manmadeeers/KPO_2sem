#include "find_holyday.h"
#include "stdafx.h"

void find_holyday(int holyday)
{
	switch (holyday) {
	case 1: cout << "��� ����� ���" << endl;
		break;
	case 152:cout << "��� ������ ���� ����" << endl;
		break;
	case 256:cout << "��� ���� ������������" << endl;
		break;
	case 365:cout << "��� ����� ������ ����" << endl;
		break;
	case 366:cout << "��� ����� ������ ����" << endl;
		break;
	default:cout << "� ���� ���� ��� ���������" << endl; break;
	}
}