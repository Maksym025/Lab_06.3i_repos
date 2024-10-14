#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3i/Lab_06.3i.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const n = 10;
			int a[n] = { 1,3,5,-3,-9,10,3,5,3,-2 };
			int minOdd = MinOdd(a, n);
			Assert::AreEqual(minOdd,-9);
		}
	};
}
