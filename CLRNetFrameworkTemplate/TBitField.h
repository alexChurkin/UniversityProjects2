#pragma once
typedef unsigned int uint32;

class TBitField {
private:
	unsigned int* mem;
	int size;

	/*
	   Принимает: номер элемента подмножества k
	   Возвращает: номер элемента массива i, в котором он хранится
	*/
	int GetNumberMem(int k) {

	}

	/*
	   Принимает: номер элемента подмножества k
	   Возвращает: номер бита в элементе массива, в котором он хранится
	*/
	int GetBit(int k) {
		return (k - 1) % (8 * sizeof(uint32));
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
	}
};