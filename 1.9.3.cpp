#include <iostream>;

using namespace std;

void reverse(int* arr, int n) {


	for (int p = 0; p < (n-1) / 2; p++) {
		int ph = arr[p];
		arr[p] = arr[(n-1)-p];
		arr[(n-1) - p] = ph;
	}

	
}


int main() {
	setlocale(LC_ALL, "RU");

	int arr[] = { 1,2,3,4,5,6,7,8,9 };

	cout << "До функции reverse:    ";
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}


	reverse(arr, 9);

	cout << endl << endl;
	cout << "После функции reverse: ";
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}


	return 0;
}

