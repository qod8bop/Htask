#include<iostream>
#include <cstring>
#include <Windows.h>
#include <fstream>

using namespace std;


int main() {
	setlocale(LC_ALL, "RU");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string s;

	ofstream fout("in.txt");
	fout << "Картошка ";
	fout << "капуста";
	fout << endl;
	fout << "Малина ";
	fout << "клубника ";
	fout << "черешня";
	fout << endl;
	fout << "Яблоко ";
	fout << "груша ";
	fout << "апельсин";
	fout.close();			


	ifstream fin("in.txt");

	while (fin >> s) {
		cout << s << endl;
	}

	fin.close();


	return 0;
}