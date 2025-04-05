#include <iostream>


using namespace std;

double* create_array(int size) {
	double* arr = static_cast<double*>(calloc(size, sizeof(double)));
	return arr;
}




int main() {
	setlocale(LC_ALL, "RU");

	int size = 10;

	double* arr = create_array(size);

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	

	return 0;
}