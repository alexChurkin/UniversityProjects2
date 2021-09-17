#include "pch.h"
#include "CppUnitTest.h"

#define private public
#include "../AlgebraOfSets/TBitField.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace AlgebraOfSetsTests
{

	TEST_CLASS(TBitFieldTester)
	{
	public:

		TEST_METHOD(Test_Constructors) {
			int USize = 230;

			TBitField A(USize);
			TBitField B(A);
			TBitField C;
			C = A;

			Logger::WriteMessage("Constructors work fine!");

			//std::string str = " hey";
			//Convert::ToString(str.c_str());
		}

		TEST_METHOD(Test_GetNumberMem)
		{
			TBitField A(64);

			Logger::WriteMessage("Testing GetNumberMem...\n");

			for (int i = 1; i <= 32; i++) {
				Assert::IsTrue(A.GetNumberMem(i) == 0);
			}

			for (int i = 33; i <= 64; i++) {
				Assert::IsTrue(A.GetNumberMem(i) == 1);
			}

			for (int i = 65; i <= 96; i++) {
				Assert::IsTrue(A.GetNumberMem(i) == 2);
			}

			for (int i = 97; i <= 128; i++) {
				Assert::IsTrue(A.GetNumberMem(i) == 3);
			}

			Logger::WriteMessage("GetNumberMem works fine!");
		}

		TEST_METHOD(Test_GetBit) {
			TBitField A(64);

			Logger::WriteMessage("Testing GetBit...\n");

			for (int i = 1; i <= 32; i++) {
				Assert::IsTrue(A.GetBit(i) == i - 1);
			}

			for (int i = 33; i <= 64; i++) {
				Assert::IsTrue(A.GetBit(i) == i - 33);
			}

			Logger::WriteMessage("GetBit works fine!");
		}

		TEST_METHOD(Test_Add) {
			Logger::WriteMessage("Testing Add...\n");

			//A
			Logger::WriteMessage("> TBitField A(68) full:\n");
			TBitField A(68);
			for (int i = 1; i <= 68; i++) {
				A.Add(i);
			}
			Logger::WriteMessage(A.ToString(68).c_str());
			Logger::WriteMessage("\n\n");
			
			//B
			Logger::WriteMessage("> TBitField B(67) only 1...16, 32, 64, 65:\n");
			TBitField B(67);
			for (int i = 1; i <= 16; i++) {
				B.Add(i);
			}
			B.Add(32);
			B.Add(64);
			B.Add(65);
			Logger::WriteMessage(B.ToString(67).c_str());
			Logger::WriteMessage("\n\n");


			//C
			Logger::WriteMessage("> TBitField C(17) only 12 and 16\n");
			TBitField C(17);
			C.Add(12);
			C.Add(16);
			Logger::WriteMessage(C.ToString(17).c_str());
			Logger::WriteMessage("\n\n");

			Logger::WriteMessage("Add works fine!");
		}
	};
}
