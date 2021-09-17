#include "pch.h"
#include "CppUnitTest.h"
#include "../AlgebraOfSets/TBitField.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgebraOfSetsTests
{

	TEST_CLASS(TBitFieldTester)
	{
	public:

		TEST_METHOD(Test1)
		{
			int universe = 230, item = 229;

			TBitField A(universe);
			TBitField B(A);
			TBitField C;
			C = A;

			//Logger::WriteMessage("Hello!!!");

			//std::string str = " hey";
			//Convert::ToString(str.c_str());
		}
	};
}
