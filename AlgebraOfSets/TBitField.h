#pragma once
#include <string>
typedef unsigned int uint32;

using namespace std;

class TBitField {
private:
	unsigned int* mem;
	int size;

	/*
	   Принимает: номер элемента подмножества k
	   Возвращает: номер элемента массива i, в котором он хранится

	   sizeof(*mem) = sizeof(uint32) = 4

	   sizeof(*mem) возвращает размер int в байтах; умножаем на 4
	   для получения размера в битах.
	*/
	int GetNumberMem(int k) {
		return (k / (8 * sizeof(*mem))) + 1;
	}

	/*
	   Принимает: номер элемента подмножества k
	   Возвращает: номер бита в элементе массива, в котором он хранится
	*/
	int GetBit(int k) {
		return (k - 1) % (8 * sizeof(*mem));
	}

public:
	//Конструктор
	TBitField(int n = 0) {
		size = n / (8 * sizeof(*mem)) + 1;
		mem = new uint32[size];
		for (int i = 0; i < size; i++) {
			mem[i] = 0;
		}
	}

	//Деструктор
	~TBitField() {
		delete[] mem;
	}

	//Конструктор копирования
	TBitField(const TBitField& tmp) {
		size = tmp.size;
		mem = new uint32[size];
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
	}

	//Оператор присваивания
	TBitField& operator=(TBitField tmp) {
		if (size != tmp.size) {
			delete[] mem;
			size = tmp.size;
			mem = new uint32[size];
		}

		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
		return *this;
	}

	/* ............................................... */

	void Add(int k) {
		int i = GetNumberMem(i);
		mem[i] = mem[i] | (1 << GetBit(k));
	}

	string ToString(int U) {
		string str;

		for (int i = 0; i < size; i++) {
			for (int j = 4 * sizeof(*mem); j >= 0; j--) {
				if ((mem[i] & (1 << j)) > 0) {
					int k = i * (8 * sizeof(*mem)) + j + 1;

					if (k <= U) {
						str += (to_string(k) + " ");
					}
				}
			}
		}

		return str;
	}

	TBitField operator∪(const TBitField& tmp) {
		TBitField res(size);

		for (int i = 0; i < size; i++) {
			res.mem[i] = mem[i] | tmp.mem[i];
		}
		return res;
	}

	TBitField operator∩(const TBitField& tmp) {
		TBitField res(size);

		for (int i = 0; i < size; i++) {
			res.mem[i] = mem[i] & tmp.mem[i];
		}
		return res;
	}

	TBitField operator~() {
		TBitField res(size);

		for (int i = 0; i < size; i++) {
			res.mem[i] = ~mem[i];
		}
		return res;
	}
};