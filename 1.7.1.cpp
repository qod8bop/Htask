#include <iostream>;

using namespace std;

int main() {

	int i;
	short s;
	long l;
	long ll;
	float f;
	double d;
	long double ld;
	bool b;

	cout << "short: " << &s << "  " << sizeof(s) << endl;
	cout << "int: " << &i << "  " << sizeof(i) << endl;
	cout << "long: " << &l << "  " << sizeof(l) << endl;
	cout << "long long: " << &ll << "  " << sizeof(ll) << endl;
	cout << "float: " << &f << "  " << sizeof(f) << endl;
	cout << "double: " << &d << "  " << sizeof(d) << endl;
	cout << "long double: " << &ld << "  " << sizeof(ld) << endl;
	cout << "bool: " << &b << "  " << sizeof(b);
	

	return 0;
}