﻿#include <iostream>

using namespace std;



	namespace addi {
		int calc(int x, int y) {
			return x + y;
		}
	}

	namespace subt {
		int calc(int x, int y) {
			return x - y;
		}
	}

	namespace mult {
		int calc(int x, int y) {
			return x * y;
		}
	}

	namespace divi {
		int calc(int x, int y) {
			return x / y;
		}
	}


int main() {

	setlocale(LC_ALL, "RU");

	int x = 6;
	int y = 9;

	cout << "x= " << x << "  y= " << y << endl << endl;
	cout << "Сложение: " << addi::calc(x, y) << endl;
	cout << "Вычитание: " << subt::calc(x, y) << endl;
	cout << "Умножение: " << mult::calc(x, y) << endl;
	cout << "Деление: " << divi::calc(x, y) << endl;

	return 0;
}