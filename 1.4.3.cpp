#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

	int in = 0;


	cout << "¬ведите число:  ";
	cin >> in;


	for (int i = 1; i < 11; i++) {
		cout << in << " x " << i << " = " << i * in;
		cout << endl;
	}

	return 0;
}