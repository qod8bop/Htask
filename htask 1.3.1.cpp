#include <iostream>

using namespace std;

int main() {
	
	cout << std::boolalpha;

	bool t = true;
	bool f = false;

	cout << t << "  " << t << "  " << (t || t) << endl;
	cout << f << " " << t << "  " << (f || t) << endl;
	cout << t << "  " << f << " " << (t || f) << endl;
	cout << f << " " << f << " " << (f || f) << endl;

	return 0;
}