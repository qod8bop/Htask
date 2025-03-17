#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	short arr[10];
	short isle = 0;
	short counter = 0;


	cout << "До сортировки:     ";


	for (int i = 0; i < 10; i++) {

		arr[i] = 1 + rand() % 10;
		cout << arr[i] << " ";
	}


	cout << endl << endl;
	cout << "После сортировки:  ";


	while (counter != 10) {
		for (int i = 0; i < 9; i++) {

			if (arr[i] > arr[i + 1]) {
				isle = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = isle;
			}
		}

		for (int i = 0; i < 9; i++) {
			if ((arr[i] == arr[i + 1]) || (arr[i] < arr[i + 1])) {
				counter++;
			}
		}


		if (counter < 9) {
			counter = 0;
		}
		else {
			break;
		}

	}


	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	
	cout << endl << endl;

	return 0;
}