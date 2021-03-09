/*
* Fraction.h
Х	–еал≥зувати клас Fraction.
Х	ѕоле first Ц ц≥ле додатне число, чисельник;
Х	поле second Ц ц≥ле додатне число, знаменник.
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