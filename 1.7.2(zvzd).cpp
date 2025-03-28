#include <iostream>;

using namespace std;

void swap(int&a,int&b) {
	
		a = b - a;
		b = b - a;
		a = b + a;

}



int main(int argc, char** argv)
{
	int a = 8, b = 5;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
