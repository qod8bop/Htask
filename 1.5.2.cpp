#include <iostream>
#include <ctime>


using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	short nums[10];
	short min = 0;
	short max = 0;


	for (int i = 0; i < (sizeof(nums) / sizeof(nums[0])); i++) {

		nums[i] = 1 + rand() % 1000;

		cout << nums[i] << " ";

	}

	min = nums[0];
	max = nums[0];


	for (int i = 1; i < (sizeof(nums) / sizeof(nums[0])); i++) {

		if (nums[i] < min) {
			min = nums[i];
		}

		if (nums[i] > max) {
			max = nums[i];
		}

	}


	cout << endl << endl << "max: " << max;
	cout << endl << endl << "min: " << min;
	return 0;
}