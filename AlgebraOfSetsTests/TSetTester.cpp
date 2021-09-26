#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define private public
#include "../AlgebraOfSets/TSet.h"

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

		TEST_METHOD(Test_ReadStringToTBitField) {
			Logger::WriteMessage("Testing ReadStringToTBitField:\n\n");

			Logger::WriteMessage("> A(12, \"11, 12\"):   ");
			TSet A(12, "11, 12");
			Logger::WriteMessage(A.TSetToString().c_str());
			Logger::WriteMessage("\n");


			Logger::WriteMessage("> A(120, \",,,3 ,,, 14 18 15,19 120,     119    \"):   ");
			TSet B(120, ",,,3 ,,, 14 18 15,19 120,     119    ");
			Logger::WriteMessage(B.TSetToString().c_str());
			Logger::WriteMessage("\n");

			Logger::WriteMessage("> A(100, \"1, 16, 2,100, 11\"):   ");
			TSet C(100, "1, 16, 2,100, 11");
			Logger::WriteMessage(C.TSetToString().c_str());
			Logger::WriteMessage("\n\n");

			Logger::WriteMessage("ReadStringToTBitField works fine!");
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
			Logger::WriteMessage("Testing operations:");

			TSet A(9);
			A.Add(2);
			A.Add(5);

			TSet B(A);
			TSet C;

			Logger::WriteMessage("Operations work fine!");
		}

		TEST_METHOD(Test_StringToWords) {
			Logger::WriteMessage("Testing StringToWords:\n");

			string str = "1, 23, 34,1    , 22";
			string* w = new string[str.length() + 2];
			int k;
			TSet t;
			t.StringToWords(str, ", ", k, w);

			for (int i = 0; i < k; i++) {
				Logger::WriteMessage((w[i] + "\n").c_str());
			}

			Logger::WriteMessage("StringToWords works fine!");
		}
	};
}