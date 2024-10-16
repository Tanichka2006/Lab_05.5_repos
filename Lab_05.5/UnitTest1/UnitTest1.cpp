#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05.5/Lab_05.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int n = 8;
			int max_iterations = 1000;
			double tolerance = 1e-6;
			int limit = find_limit(max_iterations, tolerance);
			Assert::AreEqual(limit, 2.0, 0.1);
		}
	};
}
