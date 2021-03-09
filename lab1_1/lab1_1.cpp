// lab1_1.cpp
// �������� �����
// ����������� ������ � 1.1
// ���� �� ������ �䳿 ��� ����� (��������) �ᒺ����
// ������ 23
#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction makeFraction(int a, int b)
{
    Fraction f1;
    if (!f1.Init(a, b))
        cout << "Wrong!" << endl;
    return f1;

}

int main()
{
    Fraction f1;
    f1.Read();
    f1.Display();

    int a;
    int b;
    cout << "a = ? "; cin >> a;
    cout << "b = ? "; cin >> b;
    cout << "Ipart = " << f1.ipart() << endl;
    cout << endl;
    f1 = makeFraction(a, b);
    f1.Display();

    return 0;
}