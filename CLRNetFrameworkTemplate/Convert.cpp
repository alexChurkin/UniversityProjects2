#include <string>

typedef unsigned long long ull;

namespace CLRNetFrameworkTemplate {

	using namespace System;
	using namespace System::Text;

	ull StringToUInt32(String^ str) {
		ull result = 0;
		for (ull i = 0; i < str->Length; i++) {
			ull c = (ull)(str[i] - '0');
			ull k = str->Length - i;
			ull multiplier = pow(10, k - 1);
			result += c * multiplier;
		}
		return result;
	}

	String^ UInt32ToString(ull number) {
		//n и остаток
		ull n = number, res = n % 10;

		StringBuilder^ builder = gcnew StringBuilder();

		while (n > 0)
		{
			builder->Insert(0, res);
			n /= 10;
			res = n % 10;
		}

		return builder->ToString();
	}
}