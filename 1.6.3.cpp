# include <iostream>

using namespace std;


int num = 0;
int out;


int fibich(int n) {

	switch (n) {
	case 1:
		return 0;
		break;
	
	case 2:
		return 1;

	default:
		return fibich(n - 1) + fibich(n - 2);
		break;
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
