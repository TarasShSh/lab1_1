/*
Fraction.cpp
�	���������� ����� ipart() � �������� ���� ������� ����� first / second.
�	����� �� ��������� �������� ���������� ����
*/
#include "Fraction.h"

using namespace std;

int Fraction::ipart(int first, int second) {
	if (second != 0)
	{
		return first / second;
	}
	else
	{
		return 0;
	}
}