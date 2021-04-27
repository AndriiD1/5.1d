#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1d/Money.h"
#include "../5.1d/Pair.h"
#include "../5.1d/MyException.h"
#include "../5.1d/Money.cpp"
#include "../5.1d/Pair.cpp"
#include "../5.1d/MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money a;
			double s = a.Divide(20, 2);
			Assert::AreEqual(s, 10.0);
		}
	};
}
