#include <iostream>
#include <ctime>

using namespace std;

int main() {

	setlocale(LC_ALL, "RU");

	srand(time(NULL));

	short nums[10];

	for (int i = 0; i < (sizeof(nums)/sizeof(nums[0])); i++) {

		nums[i] = 1 + rand() % 10;
		
		if (i == ((sizeof(nums) / sizeof(nums[0]))-1)) {
			cout << nums[i];
		}

		else{ cout << nums[i] << ", "; }
		
	}

	return 0;
}
