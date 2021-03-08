/*
Fraction.cpp
Х	–еал≥зувати метод ipart() Ц вид≥ленн€ ц≥лоњ частини дробу first / second.
Х	ћетод маЇ перев≥р€ти нер≥вн≥сть знаменника нулю
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