#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int in;
	int sum = 0;


	cout << "Введите число: ";
	cin >> in;

	while (in > 0) {

		sum = sum + in % 10;

		in = in / 10;
	}

	cout << "Сумма чисел: " << sum;

	return 0;
}
