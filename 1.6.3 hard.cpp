#include <iostream>

using namespace std;

long long slt[3];


 long long fibich(int n) {

	slt[0] = 0;
	slt[2] = 0;
	slt[1] = 1;

	if (n == 1) {
		slt[0] = slt[2];
	}

	if (n == 2) {
		slt[0] = slt[1];
	}


	for (int i = 2; i < n; i++) {


		slt[0] = slt[1] + slt[2];
		slt[2] = slt[1];
		slt[1] = slt[0];

	}



	return slt[0];
}



int main() {
	setlocale(LC_ALL, "RU");
	int chis = 0;

	cout << "Введите число: ";
	cin >> chis;

	for (int r = 1; r <= chis; r++) {


		cout << r  << ":   " << fibich(r) << endl << endl;

	}

	return 0;
}
