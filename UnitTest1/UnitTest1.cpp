#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1_1/Fraction.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Fraction good, bad;
			int f, z;
			f = good.ipart(250, 50);
			z = bad.ipart(5, 0);
			Assert::AreEqual(f, 5);
			Assert::AreEqual(z, 0);
		}
	};
}
