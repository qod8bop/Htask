#include  <iostream>
#include <fstream>

using namespace std;

char** masscreate(int row, int col) {
	char** arr = new char* [row];

	for (int i = 0; i < row; i++) {
		arr[i] = new char[col];
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = '-';
		}
	}

	return arr;
}


void massprint(char** arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


void Takealookaround(char** arr, int i, int j) {
	int alneigh = 0;

	if (arr[i-1][j] == '*') {alneigh++;}
	if (arr[i-1][j+1] == '*') {alneigh++;}
	if (arr[i][j+1] == '*') {alneigh++;}
	if (arr[i+1][j+1] == '*') {alneigh++;}
	if (arr[i+1][j] == '*') {alneigh++;}
	if (arr[i+1][j-1] == '*') {alneigh++;}
	if (arr[i][j-1] == '*') {alneigh++;}
	if (arr[i-1][j-1] == '*') { alneigh++;}

	if (arr[i][j] == '-') {
			if (alneigh == 3 ) {
		arr[i][j] = 'A';
		}
	}

	if (arr[i][j] == '*') {
		if (alneigh > 3 || alneigh < 2) {
			arr[i][j] = 'D';
		}
	}
}


void vibecheck(char** arr, int row, int col) {
    int cntr = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == '*') {
				cntr++;}}}
	cout << "Alvie cells: " << cntr;
}


void Update(char** arr, int row, int col, bool& dif) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == 'A') {
				arr[i][j] = '*';
				dif = true;}

			if (arr[i][j] == 'D') {
				arr[i][j] = '-';
				dif = true;}}}}


void Endcheck(char** arr, int row, int col) {
	int counter = 0;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if (arr[i][j] == '-') {
				counter++;}}}
	if (counter == row * col) {
		cout << endl << endl;
		cout << "Все погибли";
		cout << endl << endl;}

	else { cout << endl << endl; 
	cout << "Сложилась стабильная конфигурация";
	cout << endl << endl;}
}


void tlcorn(char** arr) {
	int alneigh = 0;

		if (arr[0][1] == '*') { alneigh++; }
		if (arr[1][1] == '*') { alneigh++; }
		if (arr[1][0] == '*') { alneigh++; }

		if (arr[0][0] == '-') {
			if (alneigh == 3) {
				arr[0][0] = 'A';}}
		if (arr[0][0] == '*') {
			if (alneigh > 3 || alneigh < 2) {
				arr[0][0] = 'D';}}}

void trow(char** arr, int j) {
	int alneigh = 0;

		if (arr[0][j + 1] == '*') { alneigh++; }
		if (arr[1][j + 1] == '*') { alneigh++; }
		if (arr[1][j] == '*') { alneigh++; }
		if (arr[1][j - 1] == '*') { alneigh++; }
		if (arr[0][j - 1] == '*') { alneigh++; }

		if (arr[0][j] == '-') {
			if (alneigh == 3) {
				arr[0][j] = 'A';}}
		if (arr[0][j] == '*') {
			if (alneigh > 3 || alneigh < 2) {
				arr[0][j] = 'D';}}}

void lcol(char** arr, int i) {
	int alneigh = 0;

		if (arr[i - 1][0] == '*') { alneigh++; }
		if (arr[i - 1][1] == '*') { alneigh++; }
		if (arr[i][1] == '*') { alneigh++; }
		if (arr[i + 1][1] == '*') { alneigh++; }
		if (arr[i + 1][0] == '*') { alneigh++; }

		if (arr[i][0] == '-') {
			if (alneigh == 3) {
				arr[i][0] = 'A';}}

		if (arr[i][0] == '*') {
			if (alneigh > 3 || alneigh < 2) {
				arr[i][0] = 'D';}}}

void blcorn(char** arr, int row) {
	int alneigh = 0;

	if (arr[row-2][0] == '*') { alneigh++; }
	if (arr[row-2][1] == '*') { alneigh++; }
	if (arr[row-1][1] == '*') { alneigh++; }

	if (arr[row-1][0] == '-') {
		if (alneigh == 3) {
			arr[row-1][0] = 'A';}}
	if (arr[row-1][0] == '*') {
		if (alneigh > 3 || alneigh < 2) {
			arr[row-1][0] = 'D';}}}

void trcorn(char** arr, int col) {
	int alneigh = 0;

	if (arr[1][col-1] == '*') { alneigh++; }
	if (arr[1][col- 2] == '*') { alneigh++; }
	if (arr[0][col-2] == '*') { alneigh++; }

	if (arr[0][col-1] == '-') {
		if (alneigh == 3) {
			arr[0][col-1] = 'A';}}
	if (arr[0][col-1] == '*') {
		if (alneigh > 3 || alneigh < 2) {
			arr[0][col-1] = 'D';}}}

void rcol(char** arr, int i, int col) {
	int alneigh = 0;

	if (arr[i + 1][col-1] == '*') { alneigh++; }
	if (arr[i + 1][col-2] == '*') { alneigh++; }
	if (arr[i][col-2] == '*') { alneigh++; }
	if (arr[i-1][col-2] == '*') { alneigh++; }
	if (arr[i - 1][col-1] == '*') { alneigh++; }

	if (arr[i][col-1] == '-') {
		if (alneigh == 3) {
			arr[i][col-1] = 'A';}}

	if (arr[i][col-1] == '*') {
		if (alneigh > 3 || alneigh < 2) {
			arr[i][col-1] = 'D';}}}

void brcorn(char** arr, int row, int col) {
	int alneigh = 0;

	if (arr[row-1][col-2] == '*') { alneigh++; }
	if (arr[row-2][col-2] == '*') { alneigh++; }
	if (arr[row-2][col-1] == '*') { alneigh++; }

	if (arr[row-1][col-1] == '-') {
		if (alneigh == 3) {
			arr[row-1][col-1] = 'A';}}
	if (arr[row-1][col-1] == '*') {
		if (alneigh > 3 || alneigh < 2) {
			arr[row-1][col-1] = 'D';}}}

void brow(char** arr, int row, int j){
	int alneigh = 0;

	if (arr[row-1][j-1] == '*') { alneigh++; }
	if (arr[row-2][j -1] == '*') { alneigh++; }
	if (arr[row-2][j] == '*') { alneigh++; }
	if (arr[row-2][j + 1] == '*') { alneigh++; }
	if (arr[row-1][j + 1] == '*') { alneigh++; }

	if (arr[row-1][j] == '-') {
		if (alneigh == 3) {
			arr[row-1][j] = 'A';}}
	if (arr[row-1][j] == '*') {
		if (alneigh > 3 || alneigh < 2) {
			arr[row-1][j] = 'D';}}}





int main() {
	setlocale(LC_ALL, "RU");

	int row;
	int col;
	int stroka;
	int stolbik;
	int gen = 2;
	bool dif = true;

	ifstream fin("in.txt");
	fin >> row;
	fin >> col;

	char** Universe = masscreate(row, col);

	bool Gameon = true;

	while (!fin.eof()) {
		fin >> stroka;
		fin >> stolbik;
		Universe[stroka][stolbik] = '*';
	}


	massprint(Universe, row, col);
	cout << "Generation 1" << "   ";
	vibecheck(Universe, row, col);
	cout << endl << endl;



	while (dif == true) {

		dif = false;

		tlcorn(Universe);  //Левый верхний угол

		for (int j = 1; j < col-1; j++) { //верхний ряд
			trow(Universe, j);
		}

		trcorn(Universe, col); //Правый верхний угол

		for (int i = 1; i < row-1; i++) { //правый крайний столбец
			rcol(Universe, i, col);
		}

		brcorn(Universe, row, col);	//правый нижний угол

		for (int j = 1; j < col-1; j++) {		//Нижний ряд
			brow(Universe, row, j);
		}

		blcorn(Universe, row);		//Левый нижний угол

		for (int i = 1; i < row-1; i++) {	//левый крайний столбец
			lcol(Universe, i);
		}


		for (int i = 1; i < row-1; i++) {
			for (int j = 1; j < col-1; j++) {
				Takealookaround(Universe, i, j);}}

		Update(Universe, row, col, dif);

		if (dif == false) {
			Endcheck(Universe, row, col);
			break; }

		massprint(Universe, row, col);
		cout << "Generation "<< gen << "   ";
		vibecheck(Universe, row, col);
		cout << endl << endl;
		gen++;


		

	}



	return 0;
}