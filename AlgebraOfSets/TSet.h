#pragma once
#include "TBitField.h"

class TSet {
private:
	int USize;
	TBitField tb;

	//Считывает строку и добавляет числа, содержащиеся в ней, в массив w (mem)
	void StringToIntArray(string str, int& k, uint32* w) {

	}

public:
	TSet(int USize = 0, string str = "") {
		this->USize = USize;
		tb = TBitField(USize);
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

	TSet operatorV(const TSet& tmp) {
		if (tmp.USize != USize) {
			throw "USize sizes should be equal";
		}

		TBitField tbNew = tb.operatorV(tmp.tb);
		TSet res(USize);
		res.tb = tbNew;
		return res;
	}

	TSet operatorv(const TSet& tmp) {
		if (tmp.USize != USize) {
			throw "USize sizes should be equal";
		}

		TBitField tbNew = tb.operatorv(tmp.tb);
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
};