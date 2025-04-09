#include <iostream>
#include <cstring>
#include <Windows.h>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите имя: ";
	string name;
	cin >> name;
	name = name + " ";
	cout << endl;

	cout << "Введите фамилию: ";
	string sname;
	cin >> sname;
	cout << endl;

	string intro("Здравствуйте, ");
	string fin("!");

	cout << intro + name + sname + fin;

	return 0;
}