#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string mysteryword = "ssdfg";
	string guess;

	while (1 > 0) {
		cout << "Угадйте слово: ";
		cin >> guess;

		if (guess == mysteryword) {
			cout << "Правильно! Вы победили! Загаданное слово — " + mysteryword;
			break;
		}
		else { cout << "Неправильно"; }
		cout << endl;
		cout << endl;
	}

	return 0;
}
