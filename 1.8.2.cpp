#include <iostream>

using namespace std;

namespace Calc {

	namespace addi{
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
}

int main() {

	setlocale(LC_ALL, "RU");

	int x = 6;
	int y = 9;

	cout << "x= " << x <<"  y= "<< y<< endl << endl;
	cout << "Сложение: " << Calc::addi::calc(x, y) << endl;
	cout << "Вычитание: " << Calc::subt::calc(x, y) << endl;
	cout << "Умножение: " << Calc::mult::calc(x, y) << endl;
	cout << "Деление: " << Calc::divi::calc(x, y) << endl;

	return 0;
}