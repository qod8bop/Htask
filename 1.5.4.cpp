#include <iostream>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	short arr[10];

	cout << "До сортировки:     ";


	for (int i = 0; i < 10; i++) {

		arr[i] = 1 + rand() % 10;
		cout << arr[i] << " ";
	}

	cout << endl << endl << endl;

	cout << "После сортировки:  ";

	bool swapped;
	do {
		swapped = false;
		for (int i = 9; i > 0; i--) {
			if (arr[i] < arr[i-1]) {
				swap(arr[i], arr[i - 1]);
				swapped = true;
			}
		}
	} while (swapped);



	for (int i = 0; i < 10; i++) {

		cout << arr[i] << " ";
	}


	cout << endl << endl;
	

	return 0;
}