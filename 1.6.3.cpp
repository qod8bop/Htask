# include <iostream>

using namespace std;


int num = 0;
int out;


int fibich(int n) {

	for (int i = 1; i <= n; i++) {

		if (i == 1) {
			num = 0;
			
		}

		if (i == 2) {
			num = 1;
			
		}

		else { num = fibich(i - 1) + fibich(i - 2); }

		
		
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

	


	return 0;
}