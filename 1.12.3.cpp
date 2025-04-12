#include <iostream>
#include <cstring>
#include <Windows.h>
#include <fstream>

using namespace std;




int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Ввежите размер массива: ";
	int size;
	cin >> size;
	
	ofstream fout("out.txt");
	fout << size << endl;

	int val = 0;

	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "arr[" << i << "] :  ";
		cin >> val;
		arr[size - 1 - i] = val;
	}

	for (int i = 0; i < size; i++) {
		fout << arr[i] << " ";
	}


	fout.close();


	return 0;
}