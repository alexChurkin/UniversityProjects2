#pragma once
#include "TBitField.h"

class TSet {
private:
	int USize;
	TBitField tb;

	void StringToIntArray(string str, int& k, int* w) {

	}

public:
	TSet(int U = 0, string str = "") {
		this->USize = U;
		tb = TBitField(U);
	}

	TSet(const TSet& tmp) {
		USize = tmp.USize;
		tb = TBitField(tmp.tb);
	}

	TSet& operator=(const TSet& tmp) {
		USize = tmp.USize;
		tb = TBitField(tmp.tb);
		return *this;
	}

	~TSet() {
	}

	/* ............................................... */

	void Add(int k) {
		tb.Add(k);
	}

	string TSetToString() {
		return tb.ToString(USize);
	}

	TSet operator∪(const TSet& tmp) {
		if (tmp.USize != USize) {
			throw "USize sizes should be equal";
		}

		TBitField tbNew = tb.operator∪(tmp.tb);
		TSet res(USize);
		res.tb = tbNew;
		return res;
	}

	TSet operator∩(const TSet& tmp) {
		if (tmp.USize != USize) {
			throw "USize sizes should be equal";
		}

		TBitField tbNew = tb.operator∩(tmp.tb);
		TSet res(USize);
		res.tb = tbNew;
		return res;
	}

	TSet operator~() {
		TBitField tbNew = tb.operator~();
		TSet res(USize);
		res.tb = tbNew;
		return res;
	}
	;
};