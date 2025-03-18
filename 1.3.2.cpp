#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	int max = 0;
	int mid = 0;
	int min = 0;


	cout << "Введите 1 число: ";
	cin >> n1;
	cout << endl;

	cout << "Введите 2 число: ";
	cin >> n2;
	cout << endl;

	cout << "Введите 3 число: ";
	cin >> n3;
	cout << endl;

	cout << endl;

	max = (n1 > n2 && n1 > n3) ? n1 :
		(n2 > n3) ? n2 :
		n3;


	min = (n1 < n2 && n1 < n3) ? n1 :
		(n2 < n3) ? n2 :
		n3;

	mid = (n1 == n2 || n1 == n3) ? n1 :
		(n2 == n3) ? n2 :
		(n1 < max && n1 > min) ? n1 :
		(n2 < max && n2 > min) ? n2 :
		n3;


	cout << max << " ";
	cout << mid << " ";
	cout << min << " ";

	return 0;
}
