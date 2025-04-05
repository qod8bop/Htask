#include <iostream>


using namespace std;

int** create_two_dim_array(int row, int col) {
	int** arr = new int* [row];

	for (int i = 0; i < row; i++) {
		arr[i] = new int[col];
	}

	return arr;
}

void fill_two_dim_array(int** arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			arr[i][j] = (i + 1) * (j + 1);
		}
	}
}

void print_two_dim_array(int** arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			if(arr[i][j]>= 10){ cout << arr[i][j] << " "; }
			else{ cout << arr[i][j] << "  "; }
		}
		cout << endl;
	}
}

void delete_two_dim_array(int** arr, int row, int col) {
	for (int i = 0; i < row; i++) {
		delete[] arr[i];
	}
	delete arr;
}


int main() {
	setlocale(LC_ALL, "RU");

	cout << "Введите колличество строк: ";
	int row = 0;
	cin >> row;
	cout << endl;

	cout << "Введите колличество столбцов: ";
	int col = 0;
	cin >> col;
	cout << endl;



	int** table = create_two_dim_array(row, col);
	fill_two_dim_array(table, row, col);
	print_two_dim_array(table, row, col);
	delete_two_dim_array(table, row, col);

	return 0;
}