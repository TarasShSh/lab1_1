#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_1/lab1_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest11
{
	TEST_CLASS(UnitTest11)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 10;
			int b = 5;
			Fraction u1;
			bool c = u1.Init(a, b);
			Assert::AreEqual(c, true);
		}
	};
}
