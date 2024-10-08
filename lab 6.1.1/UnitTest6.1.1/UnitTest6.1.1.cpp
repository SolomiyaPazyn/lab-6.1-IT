#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 12, 1, 11, -5, -11, 9, 8, -4, -3 };
			int S = Sum(A, 9);
			Assert::AreEqual(-18, S);
		}
	};
}
