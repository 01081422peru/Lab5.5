#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab5.5/Source.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest5
{
	TEST_CLASS(UnitTest5)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            double test;
			const double a1 = 2;
			const double d = 3;
			const double n = 5;
			test = d + (a1, d, n - 1);
			Assert::AreEqual(test, 0.);
		}
	};
}
