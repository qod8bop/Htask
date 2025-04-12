#include <iostream>
#include <cstring>
#include <Windows.h>
#include <fstream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int s;

	ofstream fout("in.txt");
	fout << "5" << endl;
	fout << "4 " << "6 " << "8 " << "10 " << "12 ";

	ifstream fin("in.txt");
	fin >> s;
	int* arr = new int[s];   

	for (int i = 0; i < s; i++) {
		fin >> arr[s - i];
		cout << arr[s - i] << " ";
	}


	delete[] arr;
	fin.close();
	fout.close();

	return 0;
}