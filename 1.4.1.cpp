#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");


	int in = 0;
	int sum = 0;

	do {

		cout << "������� ����� �����, ��� ������ ������� 0\n" << endl;

		cin >> in;
		sum = sum + in;

		cout << "�����: " << sum << endl << endl;


	} while (in != 0);

	return 0;
}