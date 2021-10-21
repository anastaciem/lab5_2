#include "pch.h"
#include "CppUnitTest.h"
#include "D:/Університет/АП/Лабораторні/Тема 5/vs/lab5_2/lab5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab5_2unit
{
	TEST_CLASS(lab5_2unit)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 0;
			int n = 1;
			int R = -(x * x / (4 * n * n - 2 * n));
			Assert::AreEqual(R, 0);
		}
	};
}