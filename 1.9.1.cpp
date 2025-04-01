#include <iostream>;

using namespace std;

void print(int* arr,int n) {
	for (int i=0; i < n; i++) {
		cout << arr[i]<<" ";
	}
}

int main() {
	
	int mass[] = { 1, 2, 3 };
	print(mass, 3);

	cout << endl;

	int m2[] = { 19, 8 , 23, 24, 8, 24 };
	print(m2, 6);

	return 0;
}