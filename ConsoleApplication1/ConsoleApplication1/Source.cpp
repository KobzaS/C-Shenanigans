#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
	int x = 8;
	int y = 3;
	double z;

	//z = (double)x / y;
	z = static_cast<double>(x / y); // does the operation in integer rather than double = 2
	cout << setprecision(2) << fixed; // forcing the compiler to show 2 decimals
	cout << z << endl; // formatting output related. requires iomanip 
	z = static_cast<double>(x) / y; // better way to do it. = 2.6667

	cout << z << endl;
	return 0;
}