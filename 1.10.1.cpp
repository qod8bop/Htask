#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");


	cout << "Введите размер массива: ";
	int* size = new int;
	cin >> *size;
	int* arr = new int[*size];

	for (int i = 0; i < *size; i++) {
		cout << "arr["<< i <<"] = ";
		cin >> arr[i];
		cout << endl;
	}

	for (int i = 0; i < *size; i++) {
		cout << arr[i] << " ";
	}

	delete size;
	delete[] arr;

	return 0;
}