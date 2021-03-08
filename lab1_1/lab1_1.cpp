// lab1_1.cpp
// Шевченко Тарас
// Лабораторна робота № 1.1
// Поля та методи –дії над одним (поточним) об’єктом
// Варіант 23
#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {

	int first, second;
	Fraction f1, u1;

	cout << "Example:" << endl;
	cout << "If first value = 12 and second = 4, then our result = " << f1.ipart(12, 4) << "." << endl;
	cout << "Now try it by your own." << endl;

	cout << "Enter first value: ";
	cin >> first;
	cout << "Enter second value: ";
	cin >> second;

	int result = u1.ipart(first, second);
		cout << "Our result = " << result << endl;
	}