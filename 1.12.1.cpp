#include <iostream>
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
	fout << endl;				//Почему-то без этого эндла, fin не читает файл дальше черешни.


	ifstream fin("in.txt");

	while(!(fin.eof())){
		fin >> s;
		if (!s.empty()) {		
			cout << s << endl;	//Почему-то последнее слово 2 раза выводится.
		}

	}

	fin.close();
	fout.close();

	return 0;
}
