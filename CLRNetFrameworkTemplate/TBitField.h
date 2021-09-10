#pragma once
typedef unsigned int uint32;

class TBitField {
private:
	unsigned int* mem;
	int size;

	/*
	   ���������: ����� �������� ������������ k
	   ����������: ����� �������� ������� i, � ������� �� ��������
	*/
	int GetNumberMem(int k) {

	}

	/*
	   ���������: ����� �������� ������������ k
	   ����������: ����� ���� � �������� �������, � ������� �� ��������
	*/
	int GetBit(int k) {
		return (k - 1) % (8 * sizeof(uint32));
	}

public:
	//�����������
	TBitField(int n = 0) {
		size = n / (8 * sizeof(*mem)) + 1;
		mem = new uint32[size];
		for (int i = 0; i < size; i++) {
			mem[i] = 0;
		}
	}

	//����������
	~TBitField() {
		delete[] mem;
	}

	//����������� �����������
	TBitField(const TBitField& tmp) {
		size = tmp.size;
		mem = new uint32[size];
		for (int i = 0; i < size; i++) {
			mem[i] = tmp.mem[i];
		}
	}

	//�������� ������������
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