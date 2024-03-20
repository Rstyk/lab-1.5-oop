#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.5 opp/Pair.h"
#include "../lab 1.5 opp/Pair.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab15oop
{
	TEST_CLASS(Lab15oop)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair p;
			Assert::IsTrue(p.Init(1.0, 2.0));
			Assert::AreEqual(1.0, p.getFirst());
			Assert::AreEqual(2.0, p.getSecond());

		}
	};
}
