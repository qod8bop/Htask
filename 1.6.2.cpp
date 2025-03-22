#include <iostream>

void pow(int x, int n) {

	int xn;
	xn = x;

	for (int i = 0; i != n - 1; i++) {
		xn = xn * x;
	}
	std::cout << x << " в степени " << n << " = " << xn << std::endl;
}



int main() {

	setlocale(LC_ALL, "RU");

	int val = 5;
	int pwr = 2;
	pow(val, pwr);
	

	val = 3;
	pwr = 3;
	pow(val, pwr);
	

	val = 4;
	pwr = 4;
	pow(val, pwr);

	return 0;
}