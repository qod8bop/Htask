#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string wrd;

	cout << "Введите слово: \n";
	cin >> wrd;

	cout << "Вы ввели: \n" << wrd;

	return 0;
}