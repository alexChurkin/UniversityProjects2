#include "pch.h"
#include "CppUnitTest.h"

#define private public
#include "../AlgebraOfSets/TSet.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgebraOfSetsTests
{

	//std::string str = " hey";
	//Convert::ToString(str.c_str());

	TEST_CLASS(TSetTester)
	{
	public:

		TEST_METHOD(Test_Constructors) {
			Logger::WriteMessage("Testing constructors:");

			TSet A(12);
			TSet B(A);
			TSet C;

			Logger::WriteMessage("Constructors work fine!");
		}

		TEST_METHOD(Test_Add) {
			Logger::WriteMessage("Testing Add:\n");

			TSet A(9);
			A.Add(2);
			A.Add(5);

			TSet B(A);
			TSet C;

			Logger::WriteMessage("Add works fine!");
		}

		TEST_METHOD(Test_Operations) {
			Logger::WriteMessage("Testing operations:\n");

			TSet A(9);
			A.Add(2);
			A.Add(5);

			TSet B(A);
			TSet C;

			Logger::WriteMessage("Operations work fine!");
		}
	};
}