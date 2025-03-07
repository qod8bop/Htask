#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	float num = 0.0;

	cout << "Введите число: \n";
	cin >> num;

	cout << "Вы ввели: \n" << num;

	return 0;
}