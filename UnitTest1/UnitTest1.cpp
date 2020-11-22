#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 5.3/lab 5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double y = g(0);
			Assert::AreEqual(y, 1.0);
		}
	};
}
