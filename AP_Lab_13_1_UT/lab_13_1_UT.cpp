// Якубовський Владислав, РІ-11, АП, unit-тест до ЛР 13.1
#include <math.h>

#include "pch.h"
#include "CppUnitTest.h"

#include "../AP_Lab_13_1/var.cpp"
#include "../AP_Lab_13_1/summarize.cpp"
#include "../AP_Lab_13_1/reccurent.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace namespaceVar;
using namespace namespaceSummarize;

namespace APLab131UT
{
	TEST_CLASS(APLab131UT)
	{
	public:
		
		TEST_METHOD(TestSummarize)
		{
			x = 0.5; eps = 0.001;

			Summarize();

			Assert::AreEqual(log(1.5), sum, 0.001);
		}
	};
}
