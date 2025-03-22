# include <iostream>

using namespace std;


unsigned long long num;
unsigned long long is2 = 0;
unsigned long long is1 = 1;

int fibich(int n) {

	 num = 0;
	 is2 = 0;
	 is1 = 1;

	 if (n == 1) {
		 num = is2;
	 }

	 if (n == 2) {
		 num = is1;
	 }


	for (int i = 2; i < n; i++) {


		num = is1 + is2;
		is2 = is1;
		is1 = num;

	}

	

	return num;
}



int main() {
	setlocale(LC_ALL, "RU");
	int chis = 0;

	cout << "Введите число: ";
	cin >> chis;

	for (int r = 1; r <= chis; r++) {

		
		cout << fibich(r) << " ";
		
	}


	// Подскажите, пожалуйста, почему всё ломается после 47 числа?

	return 0;
}