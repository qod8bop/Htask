#include <iostream> 
#include <ctime>


using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	short matr[3][6];
	short indMiN_i = 0;
	short indMiN_j = 0;
	short indMAX_i = 0;
	short indMAX_j = 0;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {

			matr[i][j] = 10 + rand() % 90;
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}

	short min = matr[0][0];
	short max = matr[0][0];



	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {

			if (matr[i][j] < min) {
				min = matr[i][j];
				indMiN_i = i;
				indMiN_j = j;
			}

			if (matr[i][j] > max) {
				max = matr[i][j];
				indMAX_i = i;
				indMAX_j = j;
			}

		}
	}



	cout << endl << endl << "max: " << max;
	cout << endl << endl << "min: " << min;

	cout << endl << endl;

	cout << endl << endl << "Индекс минимального элемента: " << indMiN_i << " " << indMiN_j;
	cout << endl << endl << "Индекс максимального элемента: " << indMAX_i << " " << indMAX_j;

	cout << endl << endl;
	cout << endl << endl;
	cout << endl << endl;



	cout << "ОТРИЦАТЕЛЬНЫЕ ЧИСЛА";

	cout << endl << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {

			matr[i][j] = -100 + rand() % 90;
			cout << matr[i][j] << " ";
		}
		cout << endl;
	}

	min = matr[0][0];	
	max = matr[0][0];



	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {

			if (matr[i][j] < min) {
				min = matr[i][j];
				indMiN_i = i;
				indMiN_j = j;
			}

			if (matr[i][j] > max) {
				max = matr[i][j];
				indMAX_i = i;
				indMAX_j = j;
			}

		}
	}



	cout << endl << endl << "max: " << max;
	cout << endl << endl << "min: " << min;

	cout << endl << endl;

	cout << endl << endl << "Индекс минимального элемента: " << indMiN_i << " " << indMiN_j;
	cout << endl << endl << "Индекс максимального элемента: " << indMAX_i << " " << indMAX_j;

	cout << endl << endl;
	
	
	
	return 0;
}
