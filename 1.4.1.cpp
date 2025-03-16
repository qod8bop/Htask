#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");


	int in = 0;
	int sum = 0;

	do {

		cout << "Введите целое число, Для выхода введите 0\n" << endl;

		cin >> in;
		sum = sum + in;

		cout << "Сумма: " << sum << endl << endl;


	} while (in != 0);

	return 0;
}