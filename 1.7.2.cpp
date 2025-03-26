#include <iostream>;

using namespace std;

void swap(int&a,int&b) {
	
	int plchld = a;
	a = b;
	b = plchld;

}



int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}