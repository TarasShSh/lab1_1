/*
Fraction.cpp
Х	–еал≥зувати метод ipart() Ц вид≥ленн€ ц≥лоњ частини дробу first / second.
Х	ћетод маЇ перев≥р€ти нер≥вн≥сть знаменника нулю
*/
#include <iostream>
#include "Fraction.h"
using namespace std;

void Fraction::SetFirst(int value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Fraction::SetSecond(int value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

bool Fraction::Init(int a, int b)
{
	if (a > 0 && b > 0)
	{
		SetFirst(a);
		SetSecond(b);
		return true;
	}
	else
		return false;
}

void Fraction::Read()
{
	int a;
	int b;
	do
	{
		cout << "first  =  "; cin >> a;
		cout << "second =  "; cin >> b;
	} while (!Init(a, b));
}

void Fraction::Display()
{
	cout << "first  = " << first << endl;
	cout << "second = " << second << endl;
}


int Fraction::ipart() {
	if (second != 0)
	{
		return first / second;
	}
	else
	{
		return 0;
	}
}