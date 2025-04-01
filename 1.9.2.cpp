#include <iostream>;


void swap(int* a, int* b) {

	int c = *a;
	*a = *b;
	*b = c;
	 
}

int main() {
	
	int a = 5;
	int b = 8;
	int* ptra = &a;
	int* ptrb = &b;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	swap(ptra, ptrb);
	std::cout << std::endl<< std::endl;


	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;

	return 0;
}