#include "pch.h"
#include "CppUnitTest.h"
#include "../AlgebraOfSets/TBitField.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgebraOfSetsTests
{
	TEST_CLASS(TBitFieldTester)
	{
	public:
		
		TEST_METHOD(Test01)
		{
			TBitField A(103);
			TBitField B(A);
			TBitField C;
			C = A;
			Assert::IsTrue(true);
		}
	};
}
