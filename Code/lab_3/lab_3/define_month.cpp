#include "define_month.h"
#include "stdafx.h"
enum month {
	������ = 1, �������, ����, ������, ���, ����, ����, ������, ��������, �������, ������, �������
};
string define_month(int month_num)
{
	string names[] = { "������","�������","����","������","���","����","����","������","��������","�������","������","�������"};
	if (month_num<������ && month_num>�������) {
		cout << "������ ������ ���" << endl;
	}
	else {
		return names[month_num - 1];
	}
}