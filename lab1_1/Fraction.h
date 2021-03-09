/*
* Fraction.h
�	���������� ���� Fraction.
�	���� first � ���� ������� �����, ���������;
�	���� second � ���� ������� �����, ���������.
*/
#pragma once
class Fraction
{

private:
	int first, second;
public:

	int GetFirst() const { return first; }
	double GetSecond() const { return second; }

	void SetFirst(int value);
	void SetSecond(int value);

	bool Init(int a, int b);
	void Display();
	void Read();

	int ipart();
};