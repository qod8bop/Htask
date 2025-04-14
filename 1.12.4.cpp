#include<iostream>
#include <cstring>
#include <Windows.h>
#include <fstream>

using namespace std;




int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int rows;
	int cols;
	int val;

	ifstream fin("in.txt");
	fin >> rows;
	fin >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			fin >> val;						
			arr[i][ cols - 1 - j] = val;
		}
	}


	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {   
			cout << arr[i] [j];
		}
		cout << endl;
	}


	fin.close();

	for (int i = 0; i < rows; i++) {
		delete[]arr[i];
	}
	delete[]arr;

	return 0;
}