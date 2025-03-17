#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	short nums[11];

	for (int i = 0; i < (sizeof(nums)/2) - 1; i++) {

		nums[i] = 1 + rand() % 10;

		cout << nums[i] << " ";

	}


	return 0;
}